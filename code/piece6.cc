MobilityHelper KazutoMobility;
KazutoMobility.SetPositionAllocator ("ns3::GridPositionAllocator",
						   "MinX", DoubleValue (320.0),
						   "MinY", DoubleValue (250.0),
						   "DeltaX", DoubleValue (15.0),
						   "DeltaY", DoubleValue (20.0),
						   "GridWidth", UintegerValue (3),
						   "LayoutType", StringValue ("RowFirst"));

KazutoMobility.SetMobilityModel ("ns3::RandomWalk2dMobilityModel",
					   "Bounds", RectangleValue (Rectangle (270, 370, 200, 300)));
KazutoMobility.Install (Kazuto);