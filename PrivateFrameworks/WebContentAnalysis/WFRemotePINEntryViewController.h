/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <WebContentAnalysis/WFPINEntryViewControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class NSObject;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {

	NSObject*<WFPINEntryViewControllerProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<WFPINEntryViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)userDidCancel;
-(void)dealloc;
-(void)setDelegate:(NSObject*<WFPINEntryViewControllerProtocol>)arg1 ;
-(NSObject*<WFPINEntryViewControllerProtocol>)delegate;
-(void)setURL:(id)arg1 ;
-(void)setPageTitle:(id)arg1 ;
-(void)userEnteredCorrectPIN;
@end

