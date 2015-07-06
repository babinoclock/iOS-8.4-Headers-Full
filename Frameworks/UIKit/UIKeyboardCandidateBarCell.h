/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIKBCacheableView.h>

@class UIKBThemedView, UILabel, NSString;

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {

	char _beginsFirstPage;
	char _endsLastPage;
	char _isAtLeftEdge;
	UIKBThemedView* _themedView;
	UILabel* _label;
	NSString* _candidateText;

}

@property (nonatomic,retain) UIKBThemedView * themedView;              //@synthesize themedView=_themedView - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * candidateText;                   //@synthesize candidateText=_candidateText - In the implementation block
@property (assign,nonatomic) char beginsFirstPage;                     //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) char endsLastPage;                        //@synthesize endsLastPage=_endsLastPage - In the implementation block
@property (assign,nonatomic) char isAtLeftEdge;                        //@synthesize isAtLeftEdge=_isAtLeftEdge - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) char cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) char keepNonPersistent; 
+(id)font;
+(id)reuseIdentifier;
+(float)widthForCandidateText:(id)arg1 ;
+(UIEdgeInsets)cacheInsets;
+(char)drawsSideBorders;
+(id)textColorWithHighlight:(char)arg1 whiteText:(char)arg2 ;
+(char)highlightAffectsBackground;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(void)setCandidate:(id)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(NSString *)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(char)cacheDeferable;
-(char)keepNonPersistent;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(void)updateLabels;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateIsAtLeftEdgeState;
-(void)setBeginsFirstPage:(char)arg1 ;
-(void)setEndsLastPage:(char)arg1 ;
-(char)beginsFirstPage;
-(char)endsLastPage;
-(void)setCandidateText:(NSString *)arg1 ;
-(NSString *)candidateText;
-(char)isAtLeftEdge;
-(void)setIsAtLeftEdge:(char)arg1 ;
@end

