/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface CKMediaObjectManager : NSObject {

	NSMutableDictionary* _transfers;
	NSArray* _classes;
	NSDictionary* _UTITypes;
	NSDictionary* _dynTypes;

}

@property (nonatomic,copy) NSArray * classes;                              //@synthesize classes=_classes - In the implementation block
@property (nonatomic,copy) NSDictionary * UTITypes;                        //@synthesize UTITypes=_UTITypes - In the implementation block
@property (nonatomic,copy) NSDictionary * dynTypes;                        //@synthesize dynTypes=_dynTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * transfers;              //@synthesize transfers=_transfers - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4 ;
-(NSDictionary *)UTITypes;
-(id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3 ;
-(id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)UTITypeForFilename:(id)arg1 ;
-(Class)classForFilename:(id)arg1 ;
-(Class)classForUTIType:(id)arg1 ;
-(NSArray *)classes;
-(void)setTransfers:(NSMutableDictionary *)arg1 ;
-(void)setClasses:(NSArray *)arg1 ;
-(void)setUTITypes:(NSDictionary *)arg1 ;
-(void)setDynTypes:(NSDictionary *)arg1 ;
-(void)transferRemoved:(id)arg1 ;
-(NSDictionary *)dynTypes;
-(id)UTITypeForExtension:(id)arg1 ;
-(NSMutableDictionary *)transfers;
-(id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2 ;
-(id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 ;
-(Class)transferClass;
-(id)fileManager;
@end

