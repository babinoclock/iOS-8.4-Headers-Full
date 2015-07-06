/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <AirPortAssistant/TableViewManagerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <AirPortAssistant/TextLinkButtonDelegate.h>

@class UIView, TextLinkButton, NSString;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {

	UIView* _linkContainerView;
	TextLinkButton* linkButton;
	id previousNavDelegate;

}

@property (nonatomic,retain) UIView * linkContainerView;              //@synthesize linkContainerView=_linkContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)touchInCellAtIndexPath:(id)arg1 ;
-(void)handleTextLinkTap;
-(void)setLinkContainerView:(UIView *)arg1 ;
-(void)setUpInitialTableFooter;
-(UIView *)linkContainerView;
@end

