/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:57 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableArray, UICollectionViewFlowLayout, NSArray;

@interface _UIFlowLayoutInfo : NSObject {

	NSMutableArray* _sections;
	char _useFloatingHeaderFooter;
	char _horizontal;
	char _leftToRight;
	CGRect _visibleBounds;
	CGSize _layoutSize;
	float _dimension;
	char _isValid;
	SCD_Struct_UI84 _rowAlignmentOptions;
	UICollectionViewFlowLayout* _layout;
	char _usesFloatingHeaderFooter;
	char _estimatesSizes;
	CGSize _contentSize;

}

@property (nonatomic,readonly) NSMutableArray * sections;                      //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char usesFloatingHeaderFooter;                    //@synthesize usesFloatingHeaderFooter=_usesFloatingHeaderFooter - In the implementation block
@property (assign,nonatomic) float dimension;                                  //@synthesize dimension=_dimension - In the implementation block
@property (assign,nonatomic) char horizontal;                                  //@synthesize horizontal=_horizontal - In the implementation block
@property (assign,nonatomic) char leftToRight;                                 //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                               //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI84 rowAlignmentOptions;              //@synthesize rowAlignmentOptions=_rowAlignmentOptions - In the implementation block
@property (assign,nonatomic) UICollectionViewFlowLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) char estimatesSizes;                              //@synthesize estimatesSizes=_estimatesSizes - In the implementation block
@property (nonatomic,readonly) NSArray * invalidatedIndexPaths; 
-(void)dealloc;
-(id)init;
-(id)copy;
-(CGSize)contentSize;
-(id)snapshot;
-(void)setContentSize:(CGSize)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setHorizontal:(char)arg1 ;
-(NSMutableArray *)sections;
-(void)invalidate:(char)arg1 ;
-(char)horizontal;
-(SCD_Struct_UI84)rowAlignmentOptions;
-(void)setSize:(CGSize)arg1 forItemAtIndexPath:(id)arg2 ;
-(NSArray *)invalidatedIndexPaths;
-(float)dimension;
-(id)addSection;
-(void)setRowAlignmentOptions:(SCD_Struct_UI84)arg1 ;
-(void)setDimension:(float)arg1 ;
-(CGRect)frameForItemAtIndexPath:(id)arg1 ;
-(void)didUpdateSizeForSection:(int)arg1 withDelta:(float)arg2 ;
-(char)usesFloatingHeaderFooter;
-(void)setUsesFloatingHeaderFooter:(char)arg1 ;
-(char)leftToRight;
-(void)setLeftToRight:(char)arg1 ;
-(char)estimatesSizes;
-(void)setEstimatesSizes:(char)arg1 ;
@end

