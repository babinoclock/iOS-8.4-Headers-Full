/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityValueProviding.h>

@class MPMediaQuery, NSString;

@interface MusicLibraryRecentlyAddedOverviewEntityValueProvider : NSObject <MusicEntityValueProviding> {

	char _hasValidItemCount;
	unsigned _itemCount;
	MPMediaQuery* _query;

}

@property (nonatomic,copy,readonly) MPMediaQuery * query;              //@synthesize query=_query - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(MPMediaQuery *)query;
-(id)initWithQuery:(id)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(float)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valuesForEntityProperties:(id)arg1 ;
@end
