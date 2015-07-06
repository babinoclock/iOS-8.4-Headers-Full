/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UIView, NSArray;

@interface MPUExtrasCollectionReusableView : UICollectionReusableView {

	UILabel* _textLabel;
	MPUContentSizeLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textLeftConstraint;
	MPUContentSizeLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textRightConstraint;
	UIEdgeInsets _labelInsets;
	UIView* _borderView;
	NSArray* _borderConstraints;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2 ;
-(void)_configureConstraintsForInsets:(UIEdgeInsets)arg1 ;
@end
