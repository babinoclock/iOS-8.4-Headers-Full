/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, BLRepairLayerStack, NSLock;

@interface BLRepairModel : NSObject {

	NSDictionary* _strokesDataDictionary;
	BLRepairLayerStack* _layerStack;
	NSLock* _lock;

}
-(void)dealloc;
-(id)initWithAdjustmentsDictionary:(id)arg1 ;
-(char)hasRedeye;
-(void)setLayerStack:(id)arg1 ;
-(char)hasRepairOrRedeye;
-(char)hasRepair;
-(char)hasLayerStack;
-(id)layerStack;
-(void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2 ;
-(id)imagePatchList;
@end

