CsmaHelper csma;
csma.SetChannelAttribute ("DataRate", DataRateValue (5000000));
csma.SetChannelAttribute ("Delay", TimeValue (MilliSeconds (2)));
NetDeviceContainer ndc1 = csma.Install (net1);
NetDeviceContainer ndc2 = csma.Install (net2);