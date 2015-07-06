/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:40 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface OCXContentTypes : NSObject {

	NSMutableArray* mContentTypes;
	NSMutableSet* mDefaultTypes;
	NSMutableDictionary* mContentTypeObjectMap;
	NSMutableDictionary* mContentTypeCountMap;

}
+(id)relativePathForPath:(id)arg1 currentPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)populateCommonExtensions;
-(id)uniquePathForPath:(id)arg1 ;
-(id)addContentTypeForKey:(id)arg1 contentType:(id)arg2 path:(id)arg3 ;
-(id)pathForKey:(id)arg1 ;
-(id)pathForContentType:(id)arg1 ;
-(id)pathForMainDocument;
-(char)containsContentType:(id)arg1 ;
-(char)containsContentType:(id)arg1 withKey:(id)arg2 ;
-(char)isLastEntryContentType:(id)arg1 ;
-(void)writeContentTypesToStream:(id)arg1 ;
-(void)addContentTypeForContentType:(id)arg1 extension:(id)arg2 ;
@end

