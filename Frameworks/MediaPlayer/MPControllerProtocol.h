/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:35 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class MPAVItem, MPAVController, UIView;


@protocol MPControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id delegate; 
@property (nonatomic,retain) MPAVItem * item; 
@property (assign,nonatomic) int orientation; 
@property (nonatomic,retain) MPAVController * player; 
@property (nonatomic,retain,readonly) UIView * view; 
@required
-(void)clearWeakReferencesToObject:(id)arg1;
-(void)setOrientation:(int)arg1 animate:(char)arg2;
-(void)noteIgnoredChangeTypes:(unsigned)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(UIView *)view;
-(MPAVItem *)item;
-(int)orientation;
-(void)setItem:(id)arg1;
-(void)setOrientation:(int)arg1;
-(void)setPlayer:(id)arg1;
-(MPAVController *)player;

@end
