package inet.openflow.attackDetection;

simple AttackDetection 
{
	parameters:
    	int received_packet_threshold = default(10);
    	int sent_packet_threshold = default(6);
}
