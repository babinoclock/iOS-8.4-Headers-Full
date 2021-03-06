/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKBRenderEffect <NSObject,NSCopying>
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) char renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) float weight; 
@required
-(CGColorRef)CGColor;
-(char)isValid;
-(float)weight;
-(char)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(float)arg1;

@end

