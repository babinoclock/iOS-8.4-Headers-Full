/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:48 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBApplication, NSString;

@interface SBProxyRemoteView : UIView {

	id _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	char _remoteViewOpaque;
	NSString* _hostRequester;

}

@property (nonatomic,retain) NSString * remoteViewIdentifier;              //@synthesize remoteViewIdentifier=_remoteViewIdentifier - In the implementation block
@property (assign,nonatomic) char remoteViewOpaque;                        //@synthesize remoteViewOpaque=_remoteViewOpaque - In the implementation block
@property (assign,nonatomic) id delegate;                                  //@synthesize delegate=_delegate - In the implementation block
+(Class)layerClass;
-(void)setRemoteViewIdentifier:(NSString *)arg1 ;
-(void)_setIsConnected:(char)arg1 ;
-(void)connectToContextID:(unsigned)arg1 forIdentifier:(id)arg2 application:(id)arg3 ;
-(void)noteConnectionLost;
-(char)remoteViewOpaque;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)didMoveToSuperview;
-(void)setRemoteViewOpaque:(char)arg1 ;
-(NSString *)remoteViewIdentifier;
-(void)disconnect;
@end

