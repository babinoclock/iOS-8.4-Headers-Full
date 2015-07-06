/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class NSString, BRCSharedLocalContainer;

@interface BRCSharedServerZone : BRCServerZone {

	NSString* _ownerName;
	NSString* _mangledID;

}

@property (nonatomic,readonly) char isSharedContainer; 
@property (nonatomic,readonly) char isPrivateContainer; 
@property (nonatomic,readonly) BRCSharedLocalContainer * container; 
@property (nonatomic,readonly) NSString * mangledID;                             //@synthesize mangledID=_mangledID - In the implementation block
-(BRCSharedLocalContainer *)container;
-(id)ownerName;
-(char)isPrivateContainer;
-(char)isSharedContainer;
-(id)initWithZoneName:(id)arg1 ownerName:(id)arg2 dbRowID:(id)arg3 plist:(id)arg4 session:(id)arg5 ;
-(NSString *)mangledID;
-(char)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(char)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(id)asSharedZone;
@end

