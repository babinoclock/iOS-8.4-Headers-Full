/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:09 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@protocol ADAdSpaceRemoteViewControllerDelegate;
@interface ADAdSpaceRemoteViewController : _UIRemoteViewController {

	id<ADAdSpaceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ADAdSpaceRemoteViewControllerDelegate> delegate; 
+(id)serviceViewControllerInterface;
+(void)adSpaceRemoteViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ADAdSpaceRemoteViewControllerDelegate>)arg1 ;
-(id<ADAdSpaceRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

