/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardCandidateView.h>
#import <UIKit/UIKeyboardCandidateViewInline.h>

@class NSString;

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline> {

	CGRect _collapsedRect;
	CGSize presentationSize;

}

@property (assign) CGSize presentationSize; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultExtendedControlHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)candidatesDidChange;
-(id)_inheritedRenderConfig;
-(void)setCandidateViewExtended:(char)arg1 ;
-(id)activeCandidateList;
-(unsigned)_numberOfColumns:(char)arg1 ;
-(void)setPresentationSize:(CGSize)arg1 ;
-(CGSize)presentationSize;
@end

