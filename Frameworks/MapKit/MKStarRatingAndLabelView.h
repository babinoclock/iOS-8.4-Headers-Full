/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class MKStarRatingView, UILabel, NSString, NSArray;

@interface MKStarRatingAndLabelView : UIView {

	MKStarRatingView* _starRatingView;
	UILabel* _reviewsLabel;
	NSString* _sourceName;
	unsigned _numberOfReviews;
	char _displaysSourceOfReviews;
	NSArray* _reviewsLabelConstraints;

}

@property (nonatomic,readonly) MKStarRatingView * starRatingView;              //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) UILabel * reviewsLabel;                         //@synthesize reviewsLabel=_reviewsLabel - In the implementation block
@property (assign,nonatomic) unsigned numberOfReviews;                         //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                            //@synthesize sourceName=_sourceName - In the implementation block
-(MKStarRatingView *)starRatingView;
-(void)_mapkit_setCalloutTextColor:(id)arg1 ;
-(void)_updateFonts;
-(void)setDisplaysSourceOfReviews:(char)arg1 ;
-(UILabel *)reviewsLabel;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithStyle:(int)arg1 ;
-(id)viewForBaselineLayout;
-(void)setNumberOfReviews:(unsigned)arg1 ;
-(unsigned)numberOfReviews;
-(void)setSourceName:(NSString *)arg1 ;
-(NSString *)sourceName;
@end

