/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@interface _ADRemoteViewController : _UIRemoteViewController {

	char _hasBeenDismissed;
	unsigned _remoteSupportedInterfaceOrientations;

}

@property (assign,nonatomic) unsigned remoteSupportedInterfaceOrientations;              //@synthesize remoteSupportedInterfaceOrientations=_remoteSupportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic) char hasBeenDismissed;                                      //@synthesize hasBeenDismissed=_hasBeenDismissed - In the implementation block
+(id)serviceViewControllerInterface;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(char)hasBeenDismissed;
-(void)setHasBeenDismissed:(char)arg1 ;
-(void)setRemoteSupportedInterfaceOrientations:(unsigned)arg1 ;
-(unsigned)remoteSupportedInterfaceOrientations;
-(void)updateInterfaceOrientationIfNeeded;
@end

