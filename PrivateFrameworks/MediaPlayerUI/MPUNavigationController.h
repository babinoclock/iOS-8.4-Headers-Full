/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@interface MPUNavigationController : UINavigationController {

	char _supportsStandardInterfaceOrientations;
	/*^block*/id _overrideSupportedInterfaceOrientationsHandler;

}

@property (nonatomic,copy) id overrideSupportedInterfaceOrientationsHandler;              //@synthesize overrideSupportedInterfaceOrientationsHandler=_overrideSupportedInterfaceOrientationsHandler - In the implementation block
@property (assign,nonatomic) char supportsStandardInterfaceOrientations;                  //@synthesize supportsStandardInterfaceOrientations=_supportsStandardInterfaceOrientations - In the implementation block
-(unsigned)supportedInterfaceOrientations;
-(void)setSupportsStandardInterfaceOrientations:(char)arg1 ;
-(id)overrideSupportedInterfaceOrientationsHandler;
-(void)setOverrideSupportedInterfaceOrientationsHandler:(id)arg1 ;
-(char)supportsStandardInterfaceOrientations;
@end
