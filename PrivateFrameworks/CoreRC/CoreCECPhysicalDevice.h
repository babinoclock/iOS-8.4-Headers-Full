/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:15 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSArray, NSSet;

@interface CoreCECPhysicalDevice : NSObject {

	NSMutableArray* _children;
	NSMutableSet* _logicalDevices;
	unsigned _physicalAddress;
	CoreCECPhysicalDevice* _parent;

}

@property (nonatomic,readonly) unsigned physicalAddress;                  //@synthesize physicalAddress=_physicalAddress - In the implementation block
@property (assign,nonatomic) CoreCECPhysicalDevice * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSSet * logicalDevices; 
@property (nonatomic,readonly) id propertyList; 
+(id)physicalDeviceTreeWithLogicalDevices:(id)arg1 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)compare:(id)arg1 ;
-(unsigned)physicalAddress;
-(id)initWithPhysicalAddress:(unsigned)arg1 ;
-(NSSet *)logicalDevices;
-(void)addLogicalDevice:(id)arg1 ;
-(id)initWithLogicalDevice:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(CoreCECPhysicalDevice *)parent;
-(void)setParent:(CoreCECPhysicalDevice *)arg1 ;
-(NSArray *)children;
@end

