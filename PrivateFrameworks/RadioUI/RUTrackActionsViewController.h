/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUTrackActionsDelegate.h>
#import <RadioUI/RUTrackActioning.h>

@protocol RUTrackActionsDelegate;
@class RUTrackActionsView, NSString, UIImage;

@interface RUTrackActionsViewController : UIViewController <RUTrackActionsDelegate, RUTrackActioning> {

	RUTrackActionsView* _trackActionsView;
	id<RUTrackActionsDelegate> _trackActionsDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) int cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<RUTrackActionsDelegate> trackActionsDelegate;              //@synthesize trackActionsDelegate=_trackActionsDelegate - In the implementation block
@property (assign,nonatomic) int enabledActions; 
@property (assign,nonatomic) int onActions; 
@property (nonatomic,copy) NSString * songText; 
+(CGSize)artworkSize;
-(void)dealloc;
-(CGSize)contentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(void)trackActioningObject:(id)arg1 didSelectAction:(int)arg2 atIndex:(int)arg3 ;
-(int)actionForButtonIndex:(int)arg1 ;
-(NSString *)artistText;
-(void)setArtistText:(NSString *)arg1 ;
-(void)setSongText:(NSString *)arg1 ;
-(NSString *)songText;
-(id<RUTrackActionsDelegate>)trackActionsDelegate;
-(void)trackActioningObjectDidChangeContentSize:(id)arg1 ;
-(id)trackActioningObject:(id)arg1 localizedTitleForAction:(int)arg2 ;
-(int)cancelIndex;
-(void)setTrackActionsDelegate:(id<RUTrackActionsDelegate>)arg1 ;
-(int)enabledActions;
-(void)setEnabledActions:(int)arg1 ;
-(int)onActions;
-(void)setOnActions:(int)arg1 ;
-(id)_trackActionsView;
@end

