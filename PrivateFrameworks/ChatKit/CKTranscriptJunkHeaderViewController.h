/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptHeaderViewController.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol CKTranscriptJunkHeaderDelegate;
@class NSString;

@interface CKTranscriptJunkHeaderViewController : CKTranscriptHeaderViewController <UIPopoverPresentationControllerDelegate> {

	id<CKTranscriptJunkHeaderDelegate> _delegate;

}

@property (assign,nonatomic) id<CKTranscriptJunkHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<CKTranscriptJunkHeaderDelegate>)arg1 ;
-(id<CKTranscriptJunkHeaderDelegate>)delegate;
-(void)loadView;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(char)shouldInvalidateOnAddressBookChange;
-(void)_reportJunkButtonPressed:(id)arg1 ;
-(void)_ignoreButtonPressed:(id)arg1 ;
@end

