/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@required
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1;
-(CGPoint)center;
-(CGAffineTransform)transform;
-(void)setCenter:(CGPoint)arg1;

@end

