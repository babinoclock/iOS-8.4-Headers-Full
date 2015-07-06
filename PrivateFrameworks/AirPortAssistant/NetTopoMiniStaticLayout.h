/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AirPortAssistant/AirPortAssistant-Structs.h>
@class CALayer, NSMutableArray, NSArray;

@interface NetTopoMiniStaticLayout : NSObject {

	id _owningView;
	int _layoutOptions;
	CALayer* _containerLayer;
	NSMutableArray* _topoDeviceLayers;
	NSMutableArray* _connectionLayers;
	NSArray* _topoDevicesDescriptor;

}

@property (nonatomic,retain) CALayer * containerLayer;                     //@synthesize containerLayer=_containerLayer - In the implementation block
@property (nonatomic,retain) NSArray * topoDevicesDescriptor;              //@synthesize topoDevicesDescriptor=_topoDevicesDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * topoDeviceLayers;                 //@synthesize topoDeviceLayers=_topoDeviceLayers - In the implementation block
@property (assign,nonatomic) int layoutOptions;                            //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) id owningView; 
-(void)dealloc;
-(void)performLayout;
-(NSArray *)topoDevicesDescriptor;
-(id)initWithContainerLayer:(id)arg1 andOptions:(int)arg2 ;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)setLayoutOptions:(int)arg1 ;
-(void)setOwningView:(id)arg1 ;
-(void)createLayoutForDevices:(id)arg1 ;
-(id)owningView;
-(void)destroyDeviceLayers;
-(int)layoutOptions;
-(CALayer *)containerLayer;
-(void)setTopoDevicesDescriptor:(NSArray *)arg1 ;
-(CGImageRef)imageForDeviceSpec:(id)arg1 wantSmall:(char)arg2 forContentsScale:(float)arg3 ;
-(NSArray *)topoDeviceLayers;
@end

