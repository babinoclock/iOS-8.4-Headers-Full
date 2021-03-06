/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:52 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIView, CAMutableMeshTransform;

@interface SBStretchTransformer : NSObject {

	UIView* m_view;
	int m_anchorEdge;
	int m_orientation;
	CAMutableMeshTransform* m_mesh;
	float m_stretchFactor;
	/*^block*/id m_animationCompletionHandler;

}

@property (nonatomic,retain) UIView * view; 
@property (assign,nonatomic) int anchorEdge; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) float stretchFactor; 
-(void)setAnchorEdge:(int)arg1 ;
-(void)updateMeshTransform:(id)arg1 stretchFactor:(float)arg2 ;
-(void)animateToZeroStretchFactorWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithView:(id)arg1 anchorEdge:(int)arg2 orientation:(int)arg3 ;
-(void)animateToZeroStretchFactor;
-(int)anchorEdge;
-(float)stretchFactor;
-(void)setStretchFactor:(float)arg1 ;
-(void)dealloc;
-(UIView *)view;
-(int)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)setOrientation:(int)arg1 ;
-(id)meshTransform;
@end

