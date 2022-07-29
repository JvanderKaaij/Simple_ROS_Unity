using System;
using RosMessageTypes.SimpleInterface;
using Unity.Robotics.ROSTCPConnector;
using UnityEngine;

public class SimpleConnection : MonoBehaviour
{

    // Variables required for ROS communication
    [SerializeField]
    string m_TopicName = "/simple_topic";

    // ROS Connector
    ROSConnection m_Ros;

    private Action<SimpleMsg> Receive;

    void Start()
    {
        Receive += OnReceive;
        // Get ROS connection static instance
        m_Ros = ROSConnection.GetOrCreateInstance();
        m_Ros.Subscribe(m_TopicName, Receive);
        m_Ros.RegisterPublisher<SimpleMsg>(m_TopicName);

        var msg = new SimpleMsg("test from Unity");
        
        m_Ros.Publish(m_TopicName, msg);
    }

    private void OnReceive(SimpleMsg msg)
    {
        print("msg: "+msg.message);
    }

}
