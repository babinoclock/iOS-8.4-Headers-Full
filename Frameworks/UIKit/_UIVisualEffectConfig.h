/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, _UIVisualEffectLayerConfig, NSArray;

@interface _UIVisualEffectConfig : NSObject {

	NSMutableArray* _layerConfigs;
	_UIVisualEffectLayerConfig* _contentConfig;

}

@property (nonatomic,readonly) _UIVisualEffectLayerConfig * contentConfig;              //@synthesize contentConfig=_contentConfig - In the implementation block
@property (nonatomic,readonly) NSArray * layerConfigs;                                  //@synthesize layerConfigs=_layerConfigs - In the implementation block
+(id)configWithContentConfig:(id)arg1 ;
+(id)configWithLayerConfigs:(id)arg1 ;
-(void)dealloc;
-(void)addLayerConfig:(id)arg1 ;
-(void)enumerateLayerConfigs:(/*^block*/id)arg1 ;
-(NSArray *)layerConfigs;
-(_UIVisualEffectLayerConfig *)contentConfig;
@end

