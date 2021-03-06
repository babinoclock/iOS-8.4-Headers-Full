/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:10 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@protocol ADDimmerViewDelegate;
@class ADTapGestureRecognizer;

@interface ADDimmerView : UIView {

	id<ADDimmerViewDelegate> _delegate;
	char _dimmed;
	ADTapGestureRecognizer* _gestureRecognizer;

}

@property (assign,nonatomic,__weak) id<ADDimmerViewDelegate> delegate; 
@property (nonatomic,retain) ADTapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) char dimmed;                                             //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) char enabled; 
-(void)setDimmed:(char)arg1 ;
-(char)dimmed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ADDimmerViewDelegate>)arg1 ;
-(id<ADDimmerViewDelegate>)delegate;
-(void)setGestureRecognizer:(ADTapGestureRecognizer *)arg1 ;
-(ADTapGestureRecognizer *)gestureRecognizer;
-(char)enabled;
-(void)_tapRecognized:(id)arg1 ;
@end

