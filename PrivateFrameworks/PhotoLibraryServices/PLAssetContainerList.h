/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:00 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLAssetContainerList <NSObject,PLDiagnosticsProvider>
@property (nonatomic,readonly) unsigned containersCount; 
@required
-(char)isEmpty;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)containers;
-(char)canEditContainers;
-(id)containersRelationshipName;
-(unsigned)containersCount;

@end

