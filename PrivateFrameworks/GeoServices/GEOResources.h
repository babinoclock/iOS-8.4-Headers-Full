/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, NSMutableArray, GEOVersionManifest;

@interface GEOResources : PBCodable <NSCopying> {

	NSString* _abExperimentURL;
	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _announcementsSupportedLanguages;
	NSString* _announcementsURL;
	NSMutableArray* _attributionBadges;
	NSMutableArray* _attributions;
	NSString* _authToken;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _businessCallerIDURL;
	NSString* _businessNameResolutionURL;
	NSString* _businessPortalBaseURL;
	NSString* _directionsURL;
	NSString* _dispatcherURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSString* _forwardGeocoderURL;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	NSString* _locationShiftURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemCategoriesURL;
	NSString* _problemNotificationAvailabilityURL;
	NSString* _problemOptInURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResources;
	NSString* _releaseInfo;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderURL;
	NSString* _reverseGeocoderVersionsURL;
	NSString* _searchAttributionManifestURL;
	NSString* _searchURL;
	NSString* _simpleETAURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSString* _usageURL;
	GEOVersionManifest* _versionManifest;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;

}

@property (nonatomic,retain) NSMutableArray * tileGroups;                                   //@synthesize tileGroups=_tileGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                                     //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                                  //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                                     //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                                        //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResources;                            //@synthesize regionalResources=_regionalResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                         //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionBadges;                            //@synthesize attributionBadges=_attributionBadges - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                                 //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,readonly) char hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;                                          //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,readonly) char hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                                       //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) char hasSearchURL; 
@property (nonatomic,retain) NSString * searchURL;                                          //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,readonly) char hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;                       //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) char hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                                    //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocoderURL; 
@property (nonatomic,retain) NSString * reverseGeocoderURL;                                 //@synthesize reverseGeocoderURL=_reverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) char hasForwardGeocoderURL; 
@property (nonatomic,retain) NSString * forwardGeocoderURL;                                 //@synthesize forwardGeocoderURL=_forwardGeocoderURL - In the implementation block
@property (nonatomic,readonly) char hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                                      //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) char hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                             //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) char hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                                   //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) char hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                                        //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) char hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                            //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) char hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                                        //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) char hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                                       //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                          //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                             //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                                //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                                //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                                 //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) char hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                           //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) char hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                         //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) char hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                               //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) char hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                               //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) char hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                                   //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
@property (nonatomic,readonly) char hasReverseGeocoderVersionsURL; 
@property (nonatomic,retain) NSString * reverseGeocoderVersionsURL;                         //@synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL - In the implementation block
@property (nonatomic,readonly) char hasProblemCategoriesURL; 
@property (nonatomic,retain) NSString * problemCategoriesURL;                               //@synthesize problemCategoriesURL=_problemCategoriesURL - In the implementation block
@property (nonatomic,readonly) char hasUsageURL; 
@property (nonatomic,retain) NSString * usageURL;                                           //@synthesize usageURL=_usageURL - In the implementation block
@property (nonatomic,readonly) char hasBusinessCallerIDURL; 
@property (nonatomic,retain) NSString * businessCallerIDURL;                                //@synthesize businessCallerIDURL=_businessCallerIDURL - In the implementation block
@property (nonatomic,readonly) char hasProblemNotificationAvailabilityURL; 
@property (nonatomic,retain) NSString * problemNotificationAvailabilityURL;                 //@synthesize problemNotificationAvailabilityURL=_problemNotificationAvailabilityURL - In the implementation block
@property (nonatomic,readonly) char hasAnnouncementsURL; 
@property (nonatomic,retain) NSString * announcementsURL;                                   //@synthesize announcementsURL=_announcementsURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * announcementsSupportedLanguages;              //@synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages - In the implementation block
@property (nonatomic,readonly) char hasBusinessNameResolutionURL; 
@property (nonatomic,retain) NSString * businessNameResolutionURL;                          //@synthesize businessNameResolutionURL=_businessNameResolutionURL - In the implementation block
@property (nonatomic,readonly) char hasDispatcherURL; 
@property (nonatomic,retain) NSString * dispatcherURL;                                      //@synthesize dispatcherURL=_dispatcherURL - In the implementation block
@property (nonatomic,readonly) char hasProblemOptInURL; 
@property (nonatomic,retain) NSString * problemOptInURL;                                    //@synthesize problemOptInURL=_problemOptInURL - In the implementation block
@property (nonatomic,readonly) char hasVersionManifest; 
@property (nonatomic,retain) GEOVersionManifest * versionManifest;                          //@synthesize versionManifest=_versionManifest - In the implementation block
@property (nonatomic,readonly) char hasAbExperimentURL; 
@property (nonatomic,retain) NSString * abExperimentURL;                                    //@synthesize abExperimentURL=_abExperimentURL - In the implementation block
@property (nonatomic,readonly) char hasBusinessPortalBaseURL; 
@property (nonatomic,retain) NSString * businessPortalBaseURL;                              //@synthesize businessPortalBaseURL=_businessPortalBaseURL - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)icons;
-(id)dictionaryRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)authToken;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(GEOVersionManifest *)versionManifest;
-(NSString *)directionsURL;
-(NSString *)searchURL;
-(void)setTileSets:(NSMutableArray *)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(unsigned)tileSetsCount;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)tileSets;
-(NSString *)forwardGeocoderURL;
-(NSString *)reverseGeocoderURL;
-(NSString *)batchReverseGeocoderURL;
-(void)setTileGroups:(NSMutableArray *)arg1 ;
-(void)setStyleSheets:(NSMutableArray *)arg1 ;
-(void)setTextures:(NSMutableArray *)arg1 ;
-(void)setFonts:(NSMutableArray *)arg1 ;
-(void)setRegionalResources:(NSMutableArray *)arg1 ;
-(void)setXmls:(NSMutableArray *)arg1 ;
-(void)setAttributionBadges:(NSMutableArray *)arg1 ;
-(void)setResourcesURL:(NSString *)arg1 ;
-(void)setSearchURL:(NSString *)arg1 ;
-(void)setSearchAttributionManifestURL:(NSString *)arg1 ;
-(void)setAutocompleteURL:(NSString *)arg1 ;
-(void)setReverseGeocoderURL:(NSString *)arg1 ;
-(void)setForwardGeocoderURL:(NSString *)arg1 ;
-(void)setDirectionsURL:(NSString *)arg1 ;
-(void)setEtaURL:(NSString *)arg1 ;
-(void)setLocationShiftURL:(NSString *)arg1 ;
-(void)setReleaseInfo:(NSString *)arg1 ;
-(void)setBatchReverseGeocoderURL:(NSString *)arg1 ;
-(void)setMapMatchURL:(NSString *)arg1 ;
-(void)setSimpleETAURL:(NSString *)arg1 ;
-(void)setStyleSheetChecksums:(NSMutableArray *)arg1 ;
-(void)setTextureChecksums:(NSMutableArray *)arg1 ;
-(void)setFontChecksums:(NSMutableArray *)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)setXmlChecksums:(NSMutableArray *)arg1 ;
-(void)setAddressCorrectionInitURL:(NSString *)arg1 ;
-(void)setAddressCorrectionUpdateURL:(NSString *)arg1 ;
-(void)setPolyLocationShiftURL:(NSString *)arg1 ;
-(void)setProblemSubmissionURL:(NSString *)arg1 ;
-(void)setProblemStatusURL:(NSString *)arg1 ;
-(void)setReverseGeocoderVersionsURL:(NSString *)arg1 ;
-(void)setProblemCategoriesURL:(NSString *)arg1 ;
-(void)setUsageURL:(NSString *)arg1 ;
-(void)setBusinessCallerIDURL:(NSString *)arg1 ;
-(void)setProblemNotificationAvailabilityURL:(NSString *)arg1 ;
-(void)setAnnouncementsURL:(NSString *)arg1 ;
-(void)setAnnouncementsSupportedLanguages:(NSMutableArray *)arg1 ;
-(void)setBusinessNameResolutionURL:(NSString *)arg1 ;
-(void)setDispatcherURL:(NSString *)arg1 ;
-(void)setProblemOptInURL:(NSString *)arg1 ;
-(void)setVersionManifest:(GEOVersionManifest *)arg1 ;
-(void)setAbExperimentURL:(NSString *)arg1 ;
-(void)setBusinessPortalBaseURL:(NSString *)arg1 ;
-(void)addTileGroup:(id)arg1 ;
-(void)addStyleSheet:(id)arg1 ;
-(void)addTexture:(id)arg1 ;
-(void)addFont:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addRegionalResource:(id)arg1 ;
-(void)addXml:(id)arg1 ;
-(void)addAttributionBadge:(id)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(void)addTextureChecksum:(id)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(void)addXmlChecksum:(id)arg1 ;
-(void)addAnnouncementsSupportedLanguages:(id)arg1 ;
-(unsigned)tileGroupsCount;
-(void)clearTileGroups;
-(id)tileGroupAtIndex:(unsigned)arg1 ;
-(unsigned)styleSheetsCount;
-(void)clearStyleSheets;
-(id)styleSheetAtIndex:(unsigned)arg1 ;
-(unsigned)texturesCount;
-(void)clearTextures;
-(id)textureAtIndex:(unsigned)arg1 ;
-(unsigned)fontsCount;
-(void)clearFonts;
-(id)fontAtIndex:(unsigned)arg1 ;
-(id)iconAtIndex:(unsigned)arg1 ;
-(unsigned)regionalResourcesCount;
-(void)clearRegionalResources;
-(id)regionalResourceAtIndex:(unsigned)arg1 ;
-(unsigned)xmlsCount;
-(void)clearXmls;
-(id)xmlAtIndex:(unsigned)arg1 ;
-(unsigned)attributionBadgesCount;
-(void)clearAttributionBadges;
-(id)attributionBadgeAtIndex:(unsigned)arg1 ;
-(unsigned)styleSheetChecksumsCount;
-(void)clearStyleSheetChecksums;
-(id)styleSheetChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)textureChecksumsCount;
-(void)clearTextureChecksums;
-(id)textureChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)fontChecksumsCount;
-(void)clearFontChecksums;
-(id)fontChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)xmlChecksumsCount;
-(void)clearXmlChecksums;
-(id)xmlChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)announcementsSupportedLanguagesCount;
-(void)clearAnnouncementsSupportedLanguages;
-(id)announcementsSupportedLanguagesAtIndex:(unsigned)arg1 ;
-(char)hasAuthToken;
-(char)hasResourcesURL;
-(char)hasSearchURL;
-(char)hasSearchAttributionManifestURL;
-(char)hasAutocompleteURL;
-(char)hasReverseGeocoderURL;
-(char)hasForwardGeocoderURL;
-(char)hasDirectionsURL;
-(char)hasEtaURL;
-(char)hasLocationShiftURL;
-(char)hasReleaseInfo;
-(char)hasBatchReverseGeocoderURL;
-(char)hasMapMatchURL;
-(char)hasSimpleETAURL;
-(char)hasAddressCorrectionInitURL;
-(char)hasAddressCorrectionUpdateURL;
-(char)hasPolyLocationShiftURL;
-(char)hasProblemSubmissionURL;
-(char)hasProblemStatusURL;
-(char)hasReverseGeocoderVersionsURL;
-(char)hasProblemCategoriesURL;
-(char)hasUsageURL;
-(char)hasBusinessCallerIDURL;
-(char)hasProblemNotificationAvailabilityURL;
-(char)hasAnnouncementsURL;
-(char)hasBusinessNameResolutionURL;
-(char)hasDispatcherURL;
-(char)hasProblemOptInURL;
-(char)hasVersionManifest;
-(char)hasAbExperimentURL;
-(char)hasBusinessPortalBaseURL;
-(NSMutableArray *)tileGroups;
-(NSMutableArray *)textures;
-(NSMutableArray *)fonts;
-(NSMutableArray *)regionalResources;
-(NSMutableArray *)xmls;
-(NSMutableArray *)attributionBadges;
-(NSString *)resourcesURL;
-(NSString *)searchAttributionManifestURL;
-(NSString *)autocompleteURL;
-(NSString *)etaURL;
-(NSString *)locationShiftURL;
-(NSString *)releaseInfo;
-(NSString *)mapMatchURL;
-(NSString *)simpleETAURL;
-(NSMutableArray *)styleSheetChecksums;
-(NSMutableArray *)textureChecksums;
-(NSMutableArray *)fontChecksums;
-(NSMutableArray *)iconChecksums;
-(NSMutableArray *)xmlChecksums;
-(NSString *)addressCorrectionInitURL;
-(NSString *)addressCorrectionUpdateURL;
-(NSString *)polyLocationShiftURL;
-(NSString *)problemSubmissionURL;
-(NSString *)problemStatusURL;
-(NSString *)reverseGeocoderVersionsURL;
-(NSString *)problemCategoriesURL;
-(NSString *)usageURL;
-(NSString *)businessCallerIDURL;
-(NSString *)problemNotificationAvailabilityURL;
-(NSString *)announcementsURL;
-(NSMutableArray *)announcementsSupportedLanguages;
-(NSString *)businessNameResolutionURL;
-(NSString *)dispatcherURL;
-(NSString *)problemOptInURL;
-(NSString *)abExperimentURL;
-(NSString *)businessPortalBaseURL;
-(NSMutableArray *)attributions;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)iconsCount;
-(void)clearIcons;
-(unsigned)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)styleSheets;
@end

