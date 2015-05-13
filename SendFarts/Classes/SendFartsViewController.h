
#import <UIKit/UIKit.h>
// 1. Import the gamekit framework
#import <GameKit/GameKit.h>

// 2. Subclass to GKSessionDelegate and GKPeerPickerControllerDelegate
//    GKSessionDelegate - Used to maintain Sessions
//    GKPeerPickerControllerDelegate - Gives a apple provided peer picker, 
//            where you can look for other devcies using teh same apps to connect with

@interface SendFartsViewController : UIViewController <GKSessionDelegate, GKPeerPickerControllerDelegate>{
	
// 3. Create these folloeing for
	
	// Session Object
	GKSession *fartSession;
	// PeerPicker Object
	GKPeerPickerController *fartPicker;
	// Array of peers connected
	NSMutableArray *fartPeers;
}

@property (retain) GKSession *fartSession;

// 4.  Methods to connect and send data
- (void) connectToPeers:(id) sender;
- (void) sendALoudFart:(id)sender;
- (void) sendASilentAssassin:(id)sender;

@end

