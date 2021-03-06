/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKPassFaceView.h>

@class WLEasyToHitCustomButton, UILabel;

@interface PKPassFrontFaceView : PKPassFaceView {

	WLEasyToHitCustomButton* _flipButton;
	WLEasyToHitCustomButton* _shareButton;
	UILabel* _logoLabel;
	char _showsInfo;
	char _showsShare;

}

@property (assign,nonatomic) char showsShare;              //@synthesize showsShare=_showsShare - In the implementation block
@property (assign,nonatomic) char showsInfo;               //@synthesize showsInfo=_showsInfo - In the implementation block
-(id)shortFaceTemplate;
-(void)createBodyContentViews;
-(id)shortScrunchedFaceTemplate;
-(id)tallFaceTemplate;
-(id)passFaceTemplate;
-(char)isFrontFace;
-(id)_relevantBuckets;
-(void)createHeaderContentViews;
-(void)setClipsContent:(char)arg1 ;
-(void)prepareForFlip;
-(char)showsInfo;
-(void)_flipButtonPressed;
-(char)showsShare;
-(void)_shareButtonPressed;
-(void)setShowsInfo:(char)arg1 ;
-(void)setShowsShare:(char)arg1 ;
-(void)updateValidity;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)contentSize;
@end

