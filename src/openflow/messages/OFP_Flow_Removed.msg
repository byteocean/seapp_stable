cplusplus {{
    #include "openflow.h"
    #include "Open_Flow_Message_m.h"
}};

packet Open_Flow_Message;
struct ofp_header;
struct oxm_basic_match;


//When a flow enty expires or is deleted, the switch informs the controller.
packet OFP_Flow_Removed extends Open_Flow_Message
{

	int datapath_id;		// Datapath unique ID. The lower 48-bits are for a MAC address,
    					   	// while the upper 16-bits are implementer-defined.
	uint8_t reason; 		//Reason flow has been expired (one of OFPR_*) 
	uint32_t packet_count;
	oxm_basic_match match;
	uint16_t idle_timeout; // Idle time before discarding (seconds). 
    uint16_t hard_timeout; // Max time before discarding (seconds). 
    uint16_t priority; // Priority level of flow entry. 
}