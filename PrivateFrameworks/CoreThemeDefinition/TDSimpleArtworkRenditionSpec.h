/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDPNGAsset, NSOrderedSet, NSString;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {

	CGRect _alignmentRect;
	char _allowsMultiPassEncoding;

}

@property (assign,nonatomic) char allowsMultiPassEncoding;                //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (nonatomic,retain) TDPNGAsset * asset; 
@property (nonatomic,retain) NSOrderedSet * slices; 
@property (assign,nonatomic) CGRect alignmentRect; 
@property (assign,nonatomic) CGRect primitiveAlignmentRect; 
@property (nonatomic,retain) NSString * alignmentRectString; 
+(void)initialize;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(void)_logError:(id)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(id)createCSIRepresentationWithCompression:(char)arg1 colorSpaceID:(unsigned)arg2 document:(id)arg3 ;
-(id)_slicesToUseForCSI;
-(CGRect)primitiveAlignmentRect;
-(void)setPrimitiveAlignmentRect:(CGRect)arg1 ;
-(id)_sliceRectanglesForRenditionSize:(SCD_Struct_TD13)arg1 ;
-(SCD_Struct_TD14)_edgeMetricsForAlignmentRect:(CGRect)arg1 originalRenditionSize:(SCD_Struct_TD13)arg2 newRenditionSize:(SCD_Struct_TD13)arg3 ;
-(char)allowsMultiPassEncoding;
-(void)setAllowsMultiPassEncoding:(char)arg1 ;
-(CGRect)alignmentRect;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)awakeFromFetch;
@end

