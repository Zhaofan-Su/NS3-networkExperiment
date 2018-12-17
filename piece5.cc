// set concrete static position
ListPositionAllocator nodesPositionAllocator;
Vector srcPos(100, 300, 0);
Vector dstPos(500, 300, 0);
nodesPositionAllocator.Add(srcPos);
nodesPositionAllocator.Add(dstPos);
MobilityHelper nodesmobility;
nodesmobility.SetPositionAllocator(&nodesPositionAllocator);
nodesmobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
nodesmobility.Install(nodes);