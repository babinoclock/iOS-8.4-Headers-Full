/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:33 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)optimizedVersionURL;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)versionHashInfo;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned)arg2 ;
-(void)dealloc;
-(id)bundle;
-(id)initWithPath:(id)arg1 ;
-(id)currentVersion;
@end

