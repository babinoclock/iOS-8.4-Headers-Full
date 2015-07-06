/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject;

@interface MCManifest : NSObject {

	NSString* _path;
	NSMutableDictionary* _manifest;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
+(id)sharedManifest;
+(id)installedProfileDataWithIdentifier:(id)arg1 ;
+(id)installedProfileWithIdentifier:(id)arg1 ;
+(void)_setManifestPath:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidateCache;
-(id)installedProfileDataWithIdentifier:(id)arg1 ;
-(id)installedProfileWithIdentifier:(id)arg1 ;
-(id)_manifest;
-(id)identifiersOfProfilesWithFilterFlags:(int)arg1 ;
-(void)_setManifest:(id)arg1 ;
-(id)allInstalledProfileIdentifiers;
-(void)addIdentifierToManifest:(id)arg1 flag:(int)arg2 ;
-(void)removeIdentifierFromManifest:(id)arg1 ;
-(id)manifest;
@end

