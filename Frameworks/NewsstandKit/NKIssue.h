/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NewsstandKit.framework/NewsstandKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NKLibrary, NSString, NSDate, NSMutableArray, NSMapTable, NSMutableSet, NSArray, NSURL;

@interface NKIssue : NSObject {

	NKLibrary* _library;
	NSString* _name;
	NSDate* _date;
	NSString* _directory;
	NSMutableArray* _assets;
	NSMapTable* _assetsByRequest;
	NSMutableSet* _resolvedAssets;
	char _foundContent;
	char _isDecodingValid;

}

@property (copy,readonly) NSArray * downloadingAssets; 
@property (copy,readonly) NSURL * contentURL; 
@property (readonly) int status; 
@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (copy) NSDate * date;                                     //@synthesize date=_date - In the implementation block
@property (copy) NSString * directory;                              //@synthesize directory=_directory - In the implementation block
-(NSURL *)contentURL;
-(NSArray *)downloadingAssets;
-(id)_initWithName:(id)arg1 date:(id)arg2 directory:(id)arg3 ;
-(char)_isDecodingValid;
-(id)_directory;
-(void)_setLibrary:(id)arg1 ;
-(id)addAssetWithRequest:(id)arg1 ;
-(id)_assetsForRequest:(id)arg1 ;
-(void)_markAssetAsResolved:(id)arg1 ;
-(void)_cleanupAsset:(id)arg1 ;
-(void)_assetChanged:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDate *)date;
-(id)_commonInit;
-(void)setDate:(NSDate *)arg1 ;
-(int)status;
-(NSString *)directory;
-(void)setDirectory:(NSString *)arg1 ;
-(id)_library;
@end

