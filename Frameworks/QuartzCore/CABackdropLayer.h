/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) char enabled; 
@property (copy) NSString * groupName; 
@property (assign) float scale; 
@property (assign) CGRect backdropRect; 
@property (assign) float marginWidth; 
@property (assign) char disablesOccludedBackdropBlurs; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(char)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(NSString *)statisticsType;
-(CGRect)backdropRect;
-(void)setBackdropRect:(CGRect)arg1 ;
-(float)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setScale:(float)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setDisablesOccludedBackdropBlurs:(char)arg1 ;
-(void)setStatisticsType:(NSString *)arg1 ;
-(double)statisticsInterval;
-(void)setStatisticsInterval:(double)arg1 ;
-(id)statisticsValues;
-(char)disablesOccludedBackdropBlurs;
-(float)marginWidth;
-(void)setMarginWidth:(float)arg1 ;
@end
