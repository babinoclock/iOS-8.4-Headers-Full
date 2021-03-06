/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMExpandableMenuButton.h>

@class CAMButtonLabel;

@interface CAMHDRButton : CAMExpandableMenuButton {

	char _allowsAutomaticHDR;
	CAMButtonLabel* __headerLabel;

}

@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) char allowsAutomaticHDR;                      //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
@property (nonatomic,readonly) CAMButtonLabel * _headerLabel;              //@synthesize _headerLabel=__headerLabel - In the implementation block
-(void)setHDRMode:(int)arg1 ;
-(int)HDRMode;
-(void)reloadData;
-(id)headerView;
-(void)updateToContentSize:(id)arg1 ;
-(id)initWithExpansionOrientation:(int)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(void)setAllowsAutomaticHDR:(char)arg1 ;
-(void)_commonCAMHDRButtonInitialization;
-(int)modeForIndex:(int)arg1 ;
-(int)indexForMode:(int)arg1 ;
-(char)allowsAutomaticHDR;
-(CAMButtonLabel *)_headerLabel;
-(int)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(int)arg1 ;
@end

