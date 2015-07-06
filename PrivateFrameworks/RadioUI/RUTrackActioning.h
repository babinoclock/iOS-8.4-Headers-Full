/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol RUTrackActioning <NSObject>
@property (nonatomic,copy) NSString * artistText; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,readonly) int cancelIndex; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (assign,nonatomic,__weak) id<RUTrackActionsDelegate> trackActionsDelegate; 
@property (assign,nonatomic) int enabledActions; 
@property (assign,nonatomic) int onActions; 
@property (nonatomic,copy) NSString * songText; 
@required
+(CGSize*)artworkSize;
-(CGSize)contentSize;
-(void)setArtworkImage:(id)arg1;
-(UIImage *)artworkImage;
-(int)actionForButtonIndex:(int)arg1;
-(NSString *)artistText;
-(void)setArtistText:(id)arg1;
-(void)setSongText:(id)arg1;
-(NSString *)songText;
-(id<RUTrackActionsDelegate>)trackActionsDelegate;
-(int)cancelIndex;
-(void)setTrackActionsDelegate:(id)arg1;
-(int)enabledActions;
-(void)setEnabledActions:(int)arg1;
-(int)onActions;
-(void)setOnActions:(int)arg1;

@end

