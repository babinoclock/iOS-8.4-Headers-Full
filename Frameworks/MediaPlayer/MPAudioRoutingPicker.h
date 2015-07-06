/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:36 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class MPAVRoutingController, NSArray, NSString;

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	MPAVRoutingController* _routingController;
	char _ignoringInteractionEvents;
	NSArray* _routes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAVPlayer:(id)arg1 ;
-(char)_pickRouteAtIndex:(unsigned)arg1 withPassword:(id)arg2 ;
-(void)setAVPlayer:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(char)requiresPortraitOrientation;
@end
