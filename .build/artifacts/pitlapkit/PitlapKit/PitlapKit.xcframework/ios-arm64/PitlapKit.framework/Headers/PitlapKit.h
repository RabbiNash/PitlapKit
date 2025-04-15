#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PitlapKitApiErrorLocal, PitlapKitApiErrorRemote, PitlapKitApiResponse<T>, PitlapKitApiResponseCompanion, PitlapKitCompoundLaps, PitlapKitConstructorStandingDto, PitlapKitConstructorStandingDtoCompanion, PitlapKitConstructorStandingModel, PitlapKitDriverStandingModel, PitlapKitEventFormatModel, PitlapKitEventFormatModelCompanion, PitlapKitEventSchedule, PitlapKitEventScheduleModel, PitlapKitGroupedLapModel, PitlapKitHttpClientProvider, PitlapKitKotlinAbstractCoroutineContextElement, PitlapKitKotlinAbstractCoroutineContextKey<B, E>, PitlapKitKotlinArray<T>, PitlapKitKotlinByteArray, PitlapKitKotlinByteIterator, PitlapKitKotlinCancellationException, PitlapKitKotlinEnum<E>, PitlapKitKotlinEnumCompanion, PitlapKitKotlinException, PitlapKitKotlinIllegalStateException, PitlapKitKotlinKTypeProjection, PitlapKitKotlinKTypeProjectionCompanion, PitlapKitKotlinKVariance, PitlapKitKotlinNothing, PitlapKitKotlinRuntimeException, PitlapKitKotlinThrowable, PitlapKitKotlinUnit, PitlapKitKotlinx_coroutines_coreCoroutineDispatcher, PitlapKitKotlinx_coroutines_coreCoroutineDispatcherKey, PitlapKitKotlinx_io_coreBuffer, PitlapKitKotlinx_serialization_coreSerialKind, PitlapKitKotlinx_serialization_coreSerializersModule, PitlapKitKtor_client_coreHttpClient, PitlapKitKtor_client_coreHttpClientCall, PitlapKitKtor_client_coreHttpClientCallCompanion, PitlapKitKtor_client_coreHttpClientConfig<T>, PitlapKitKtor_client_coreHttpClientEngineConfig, PitlapKitKtor_client_coreHttpReceivePipeline, PitlapKitKtor_client_coreHttpReceivePipelinePhases, PitlapKitKtor_client_coreHttpRequestBuilder, PitlapKitKtor_client_coreHttpRequestBuilderCompanion, PitlapKitKtor_client_coreHttpRequestData, PitlapKitKtor_client_coreHttpRequestPipeline, PitlapKitKtor_client_coreHttpRequestPipelinePhases, PitlapKitKtor_client_coreHttpResponse, PitlapKitKtor_client_coreHttpResponseContainer, PitlapKitKtor_client_coreHttpResponseData, PitlapKitKtor_client_coreHttpResponsePipeline, PitlapKitKtor_client_coreHttpResponsePipelinePhases, PitlapKitKtor_client_coreHttpSendPipeline, PitlapKitKtor_client_coreHttpSendPipelinePhases, PitlapKitKtor_client_coreProxyConfig, PitlapKitKtor_eventsEventDefinition<T>, PitlapKitKtor_eventsEvents, PitlapKitKtor_httpContentType, PitlapKitKtor_httpContentTypeCompanion, PitlapKitKtor_httpHeaderValueParam, PitlapKitKtor_httpHeaderValueWithParameters, PitlapKitKtor_httpHeaderValueWithParametersCompanion, PitlapKitKtor_httpHeadersBuilder, PitlapKitKtor_httpHttpMethod, PitlapKitKtor_httpHttpMethodCompanion, PitlapKitKtor_httpHttpProtocolVersion, PitlapKitKtor_httpHttpProtocolVersionCompanion, PitlapKitKtor_httpHttpStatusCode, PitlapKitKtor_httpHttpStatusCodeCompanion, PitlapKitKtor_httpOutgoingContent, PitlapKitKtor_httpURLBuilder, PitlapKitKtor_httpURLBuilderCompanion, PitlapKitKtor_httpURLProtocol, PitlapKitKtor_httpURLProtocolCompanion, PitlapKitKtor_httpUrl, PitlapKitKtor_httpUrlCompanion, PitlapKitKtor_utilsAttributeKey<T>, PitlapKitKtor_utilsGMTDate, PitlapKitKtor_utilsGMTDateCompanion, PitlapKitKtor_utilsMonth, PitlapKitKtor_utilsMonthCompanion, PitlapKitKtor_utilsPipeline<TSubject, TContext>, PitlapKitKtor_utilsPipelinePhase, PitlapKitKtor_utilsStringValuesBuilderImpl, PitlapKitKtor_utilsTypeInfo, PitlapKitKtor_utilsWeekDay, PitlapKitKtor_utilsWeekDayCompanion, PitlapKitLapModel, PitlapKitPitlap, PitlapKitPitlapDBCompanion, PitlapKitPitlapDBQueries, PitlapKitQualifyingResultModel, PitlapKitQualifyingResultsModel, PitlapKitRaceResultModel, PitlapKitRaceResultsModel, PitlapKitRaceSummaryModel, PitlapKitResultError<__covariant E>, PitlapKitResultSuccess<__covariant D>, PitlapKitRuntimeAfterVersion, PitlapKitRuntimeBaseTransacterImpl, PitlapKitRuntimeExecutableQuery<__covariant RowType>, PitlapKitRuntimeQuery<__covariant RowType>, PitlapKitRuntimeTransacterImpl, PitlapKitRuntimeTransacterTransaction, PitlapKitSession1, PitlapKitSession1Companion, PitlapKitSession2, PitlapKitSession2Companion, PitlapKitSession3, PitlapKitSession3Companion, PitlapKitSession4, PitlapKitSession4Companion, PitlapKitSession5, PitlapKitSession5Companion, PitlapKitTrackSummaryModel, PitlapKitWeatherDto, PitlapKitWeatherDtoCompanion, PitlapKitWeatherModel, PitlapKitYoutubeVideoModel;

@protocol PitlapKitApiError, PitlapKitDatabaseDriverFactory, PitlapKitError, PitlapKitKotlinAnnotation, PitlapKitKotlinAutoCloseable, PitlapKitKotlinComparable, PitlapKitKotlinContinuation, PitlapKitKotlinContinuationInterceptor, PitlapKitKotlinCoroutineContext, PitlapKitKotlinCoroutineContextElement, PitlapKitKotlinCoroutineContextKey, PitlapKitKotlinFunction, PitlapKitKotlinIterator, PitlapKitKotlinKAnnotatedElement, PitlapKitKotlinKClass, PitlapKitKotlinKClassifier, PitlapKitKotlinKDeclarationContainer, PitlapKitKotlinKType, PitlapKitKotlinMapEntry, PitlapKitKotlinSequence, PitlapKitKotlinSuspendFunction2, PitlapKitKotlinx_coroutines_coreChildHandle, PitlapKitKotlinx_coroutines_coreChildJob, PitlapKitKotlinx_coroutines_coreCoroutineScope, PitlapKitKotlinx_coroutines_coreDisposableHandle, PitlapKitKotlinx_coroutines_coreJob, PitlapKitKotlinx_coroutines_coreParentJob, PitlapKitKotlinx_coroutines_coreRunnable, PitlapKitKotlinx_coroutines_coreSelectClause, PitlapKitKotlinx_coroutines_coreSelectClause0, PitlapKitKotlinx_coroutines_coreSelectInstance, PitlapKitKotlinx_io_coreRawSink, PitlapKitKotlinx_io_coreRawSource, PitlapKitKotlinx_io_coreSink, PitlapKitKotlinx_io_coreSource, PitlapKitKotlinx_serialization_coreCompositeDecoder, PitlapKitKotlinx_serialization_coreCompositeEncoder, PitlapKitKotlinx_serialization_coreDecoder, PitlapKitKotlinx_serialization_coreDeserializationStrategy, PitlapKitKotlinx_serialization_coreEncoder, PitlapKitKotlinx_serialization_coreKSerializer, PitlapKitKotlinx_serialization_coreSerialDescriptor, PitlapKitKotlinx_serialization_coreSerializationStrategy, PitlapKitKotlinx_serialization_coreSerializersModuleCollector, PitlapKitKtor_client_coreHttpClientEngine, PitlapKitKtor_client_coreHttpClientEngineCapability, PitlapKitKtor_client_coreHttpClientPlugin, PitlapKitKtor_client_coreHttpRequest, PitlapKitKtor_httpHeaders, PitlapKitKtor_httpHttpMessage, PitlapKitKtor_httpHttpMessageBuilder, PitlapKitKtor_httpParameters, PitlapKitKtor_httpParametersBuilder, PitlapKitKtor_ioByteReadChannel, PitlapKitKtor_ioCloseable, PitlapKitKtor_ioJvmSerializable, PitlapKitKtor_utilsAttributes, PitlapKitKtor_utilsStringValues, PitlapKitKtor_utilsStringValuesBuilder, PitlapKitPitlapDB, PitlapKitPitlapService, PitlapKitPlatform, PitlapKitResult, PitlapKitRuntimeCloseable, PitlapKitRuntimeQueryListener, PitlapKitRuntimeQueryResult, PitlapKitRuntimeSqlCursor, PitlapKitRuntimeSqlDriver, PitlapKitRuntimeSqlPreparedStatement, PitlapKitRuntimeSqlSchema, PitlapKitRuntimeTransacter, PitlapKitRuntimeTransacterBase, PitlapKitRuntimeTransactionCallbacks, PitlapKitRuntimeTransactionWithReturn, PitlapKitRuntimeTransactionWithoutReturn;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PitlapKitBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PitlapKitBase (PitlapKitBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PitlapKitMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PitlapKitMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPitlapKitKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PitlapKitNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PitlapKitByte : PitlapKitNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PitlapKitUByte : PitlapKitNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PitlapKitShort : PitlapKitNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PitlapKitUShort : PitlapKitNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PitlapKitInt : PitlapKitNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PitlapKitUInt : PitlapKitNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PitlapKitLong : PitlapKitNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PitlapKitULong : PitlapKitNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PitlapKitFloat : PitlapKitNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PitlapKitDouble : PitlapKitNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PitlapKitBoolean : PitlapKitNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface PitlapKitGreeting : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol PitlapKitPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface PitlapKitIOSPlatform : PitlapKitBase <PitlapKitPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("DatabaseDriverFactory")))
@protocol PitlapKitDatabaseDriverFactory
@required
- (id<PitlapKitRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventSchedule")))
@interface PitlapKitEventSchedule : PitlapKitBase
- (instancetype)initWithRound:(int64_t)round country:(NSString *)country officialEventName:(NSString *)officialEventName eventName:(NSString *)eventName eventFormat:(NSString *)eventFormat session1:(NSString *)session1 session1DateUTC:(NSString * _Nullable)session1DateUTC session2:(NSString *)session2 session2DateUTC:(NSString * _Nullable)session2DateUTC session3:(NSString *)session3 session3DateUTC:(NSString * _Nullable)session3DateUTC session4:(NSString *)session4 session4DateUTC:(NSString * _Nullable)session4DateUTC session5:(NSString *)session5 session5DateUTC:(NSString * _Nullable)session5DateUTC year:(NSString *)year __attribute__((swift_name("init(round:country:officialEventName:eventName:eventFormat:session1:session1DateUTC:session2:session2DateUTC:session3:session3DateUTC:session4:session4DateUTC:session5:session5DateUTC:year:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitEventSchedule *)doCopyRound:(int64_t)round country:(NSString *)country officialEventName:(NSString *)officialEventName eventName:(NSString *)eventName eventFormat:(NSString *)eventFormat session1:(NSString *)session1 session1DateUTC:(NSString * _Nullable)session1DateUTC session2:(NSString *)session2 session2DateUTC:(NSString * _Nullable)session2DateUTC session3:(NSString *)session3 session3DateUTC:(NSString * _Nullable)session3DateUTC session4:(NSString *)session4 session4DateUTC:(NSString * _Nullable)session4DateUTC session5:(NSString *)session5 session5DateUTC:(NSString * _Nullable)session5DateUTC year:(NSString *)year __attribute__((swift_name("doCopy(round:country:officialEventName:eventName:eventFormat:session1:session1DateUTC:session2:session2DateUTC:session3:session3DateUTC:session4:session4DateUTC:session5:session5DateUTC:year:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *eventFormat __attribute__((swift_name("eventFormat")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *officialEventName __attribute__((swift_name("officialEventName")));
@property (readonly) int64_t round __attribute__((swift_name("round")));
@property (readonly) NSString *session1 __attribute__((swift_name("session1")));
@property (readonly) NSString * _Nullable session1DateUTC __attribute__((swift_name("session1DateUTC")));
@property (readonly) NSString *session2 __attribute__((swift_name("session2")));
@property (readonly) NSString * _Nullable session2DateUTC __attribute__((swift_name("session2DateUTC")));
@property (readonly) NSString *session3 __attribute__((swift_name("session3")));
@property (readonly) NSString * _Nullable session3DateUTC __attribute__((swift_name("session3DateUTC")));
@property (readonly) NSString *session4 __attribute__((swift_name("session4")));
@property (readonly) NSString * _Nullable session4DateUTC __attribute__((swift_name("session4DateUTC")));
@property (readonly) NSString *session5 __attribute__((swift_name("session5")));
@property (readonly) NSString * _Nullable session5DateUTC __attribute__((swift_name("session5DateUTC")));
@property (readonly) NSString *year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSDatabaseDriverFactory")))
@interface PitlapKitIOSDatabaseDriverFactory : PitlapKitBase <PitlapKitDatabaseDriverFactory>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PitlapKitRuntimeSqlDriver>)createDriver __attribute__((swift_name("createDriver()")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol PitlapKitRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol PitlapKitRuntimeTransacter <PitlapKitRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<PitlapKitRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<PitlapKitRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("PitlapDB")))
@protocol PitlapKitPitlapDB <PitlapKitRuntimeTransacter>
@required
@property (readonly) PitlapKitPitlapDBQueries *pitlapDBQueries __attribute__((swift_name("pitlapDBQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PitlapDBCompanion")))
@interface PitlapKitPitlapDBCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitPitlapDBCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitPitlapDB>)invokeDriver:(id<PitlapKitRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<PitlapKitRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface PitlapKitRuntimeBaseTransacterImpl : PitlapKitBase
- (instancetype)initWithDriver:(id<PitlapKitRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(PitlapKitKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(PitlapKitRuntimeTransacterTransaction *)transaction enclosing:(PitlapKitRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(PitlapKitKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PitlapKitRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface PitlapKitRuntimeTransacterImpl : PitlapKitRuntimeBaseTransacterImpl <PitlapKitRuntimeTransacter>
- (instancetype)initWithDriver:(id<PitlapKitRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<PitlapKitRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<PitlapKitRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PitlapDBQueries")))
@interface PitlapKitPitlapDBQueries : PitlapKitRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PitlapKitRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)insertEventRound:(int64_t)round country:(NSString *)country officialEventName:(NSString *)officialEventName eventName:(NSString *)eventName eventFormat:(NSString *)eventFormat session1:(NSString *)session1 session1DateUTC:(NSString * _Nullable)session1DateUTC session2:(NSString *)session2 session2DateUTC:(NSString * _Nullable)session2DateUTC session3:(NSString *)session3 session3DateUTC:(NSString * _Nullable)session3DateUTC session4:(NSString *)session4 session4DateUTC:(NSString * _Nullable)session4DateUTC session5:(NSString *)session5 session5DateUTC:(NSString * _Nullable)session5DateUTC year:(NSString *)year __attribute__((swift_name("insertEvent(round:country:officialEventName:eventName:eventFormat:session1:session1DateUTC:session2:session2DateUTC:session3:session3DateUTC:session4:session4DateUTC:session5:session5DateUTC:year:)")));
- (void)removeAllEVents __attribute__((swift_name("removeAllEVents()")));
- (PitlapKitRuntimeQuery<PitlapKitEventSchedule *> *)selectAllEventsInfo __attribute__((swift_name("selectAllEventsInfo()")));
- (PitlapKitRuntimeQuery<id> *)selectAllEventsInfoMapper:(id (^)(PitlapKitLong *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("selectAllEventsInfo(mapper:)")));
- (PitlapKitRuntimeQuery<PitlapKitEventSchedule *> *)selectEventByYearYear:(NSString *)year __attribute__((swift_name("selectEventByYear(year:)")));
- (PitlapKitRuntimeQuery<id> *)selectEventByYearYear:(NSString *)year mapper:(id (^)(PitlapKitLong *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("selectEventByYear(year:mapper:)")));
- (PitlapKitRuntimeQuery<PitlapKitEventSchedule *> *)selectEventByYearAndRoundYear:(NSString *)year round:(int64_t)round __attribute__((swift_name("selectEventByYearAndRound(year:round:)")));
- (PitlapKitRuntimeQuery<id> *)selectEventByYearAndRoundYear:(NSString *)year round:(int64_t)round mapper:(id (^)(PitlapKitLong *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *, NSString * _Nullable, NSString *))mapper __attribute__((swift_name("selectEventByYearAndRound(year:round:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientProvider")))
@interface PitlapKitHttpClientProvider : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClientProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitHttpClientProvider *shared __attribute__((swift_name("shared")));
@property (readonly) PitlapKitKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponse")))
@interface PitlapKitApiResponse<T> : PitlapKitBase
- (instancetype)initWithSuccess:(BOOL)success data:(T _Nullable)data __attribute__((swift_name("init(success:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitApiResponseCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitApiResponse<T> *)doCopySuccess:(BOOL)success data:(T _Nullable)data __attribute__((swift_name("doCopy(success:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) BOOL success __attribute__((swift_name("success")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiResponseCompanion")))
@interface PitlapKitApiResponseCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<PitlapKitKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((swift_name("Error")))
@protocol PitlapKitError
@required
@end

__attribute__((swift_name("ApiError")))
@protocol PitlapKitApiError <PitlapKitError>
@required
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PitlapKitKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PitlapKitKotlinEnum<E> : PitlapKitBase <PitlapKitKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiErrorLocal")))
@interface PitlapKitApiErrorLocal : PitlapKitKotlinEnum<PitlapKitApiErrorLocal *> <PitlapKitApiError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PitlapKitApiErrorLocal *diskFull __attribute__((swift_name("diskFull")));
@property (class, readonly) PitlapKitApiErrorLocal *unknown __attribute__((swift_name("unknown")));
+ (PitlapKitKotlinArray<PitlapKitApiErrorLocal *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitApiErrorLocal *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiErrorRemote")))
@interface PitlapKitApiErrorRemote : PitlapKitKotlinEnum<PitlapKitApiErrorRemote *> <PitlapKitApiError>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PitlapKitApiErrorRemote *requestTimeout __attribute__((swift_name("requestTimeout")));
@property (class, readonly) PitlapKitApiErrorRemote *tooManyRequests __attribute__((swift_name("tooManyRequests")));
@property (class, readonly) PitlapKitApiErrorRemote *noInternet __attribute__((swift_name("noInternet")));
@property (class, readonly) PitlapKitApiErrorRemote *server __attribute__((swift_name("server")));
@property (class, readonly) PitlapKitApiErrorRemote *serialization __attribute__((swift_name("serialization")));
@property (class, readonly) PitlapKitApiErrorRemote *unknown __attribute__((swift_name("unknown")));
+ (PitlapKitKotlinArray<PitlapKitApiErrorRemote *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitApiErrorRemote *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Result")))
@protocol PitlapKitResult
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultError")))
@interface PitlapKitResultError<__covariant E> : PitlapKitBase <PitlapKitResult>
- (instancetype)initWithError:(E)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitResultError<E> *)doCopyError:(E)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) E error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultSuccess")))
@interface PitlapKitResultSuccess<__covariant D> : PitlapKitBase <PitlapKitResult>
- (instancetype)initWithData:(D _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitResultSuccess<D> *)doCopyData:(D _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) D _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pitlap")))
@interface PitlapKitPitlap : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)pitlap __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitPitlap *shared __attribute__((swift_name("shared")));
- (id<PitlapKitPitlapService>)getService __attribute__((swift_name("getService()")));
@end

__attribute__((swift_name("PitlapService")))
@protocol PitlapKitPitlapService
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getConstructorStandingsWithCompletionHandler:(void (^)(NSArray<PitlapKitConstructorStandingModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConstructorStandings(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getDriverStandingsWithCompletionHandler:(void (^)(NSArray<PitlapKitDriverStandingModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDriverStandings(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getEventYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(PitlapKitEventScheduleModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEvent(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPracticeLapsYear:(int32_t)year round:(int32_t)round sessionName:(NSString *)sessionName completionHandler:(void (^)(NSArray<PitlapKitGroupedLapModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPracticeLaps(year:round:sessionName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getQualifyingResultsYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(NSArray<PitlapKitQualifyingResultModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getQualifyingResults(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getRaceResultsYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(NSArray<PitlapKitRaceResultModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRaceResults(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getRaceSummaryYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(PitlapKitRaceSummaryModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRaceSummary(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getScheduleYear:(int32_t)year completionHandler:(void (^)(NSArray<PitlapKitEventScheduleModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSchedule(year:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getTrackSummaryTrackName:(NSString *)trackName completionHandler:(void (^)(PitlapKitTrackSummaryModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTrackSummary(trackName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getWeatherYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(PitlapKitWeatherModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getWeather(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getYTVideosChannelName:(NSString *)channelName completionHandler:(void (^)(NSArray<PitlapKitYoutubeVideoModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getYTVideos(channelName:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedLapsMapper")))
@interface PitlapKitGroupedLapsMapper : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<PitlapKitGroupedLapModel *> *)mapToGroupedLapModelsLaps:(NSArray<PitlapKitLapModel *> *)laps __attribute__((swift_name("mapToGroupedLapModels(laps:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompoundLaps")))
@interface PitlapKitCompoundLaps : PitlapKitBase
- (instancetype)initWithCompound:(NSString *)compound laps:(NSArray<PitlapKitLapModel *> *)laps __attribute__((swift_name("init(compound:laps:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitCompoundLaps *)doCopyCompound:(NSString *)compound laps:(NSArray<PitlapKitLapModel *> *)laps __attribute__((swift_name("doCopy(compound:laps:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *compound __attribute__((swift_name("compound")));
@property (readonly) NSArray<PitlapKitLapModel *> *laps __attribute__((swift_name("laps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupedLapModel")))
@interface PitlapKitGroupedLapModel : PitlapKitBase
- (instancetype)initWithDriver:(NSString *)driver fullName:(NSString *)fullName headshotUrl:(NSString *)headshotUrl compoundLaps:(NSArray<PitlapKitCompoundLaps *> *)compoundLaps bestLapTime:(NSString *)bestLapTime __attribute__((swift_name("init(driver:fullName:headshotUrl:compoundLaps:bestLapTime:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitGroupedLapModel *)doCopyDriver:(NSString *)driver fullName:(NSString *)fullName headshotUrl:(NSString *)headshotUrl compoundLaps:(NSArray<PitlapKitCompoundLaps *> *)compoundLaps bestLapTime:(NSString *)bestLapTime __attribute__((swift_name("doCopy(driver:fullName:headshotUrl:compoundLaps:bestLapTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bestLapTime __attribute__((swift_name("bestLapTime")));
@property (readonly) NSArray<PitlapKitCompoundLaps *> *compoundLaps __attribute__((swift_name("compoundLaps")));
@property (readonly) NSString *driver __attribute__((swift_name("driver")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString *headshotUrl __attribute__((swift_name("headshotUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LapModel")))
@interface PitlapKitLapModel : PitlapKitBase
- (instancetype)initWithDriver:(NSString *)driver headshotUrl:(NSString *)headshotUrl compound:(NSString *)compound lapTime:(NSString *)lapTime lapNumber:(int32_t)lapNumber fullName:(NSString *)fullName __attribute__((swift_name("init(driver:headshotUrl:compound:lapTime:lapNumber:fullName:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitLapModel *)doCopyDriver:(NSString *)driver headshotUrl:(NSString *)headshotUrl compound:(NSString *)compound lapTime:(NSString *)lapTime lapNumber:(int32_t)lapNumber fullName:(NSString *)fullName __attribute__((swift_name("doCopy(driver:headshotUrl:compound:lapTime:lapNumber:fullName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *compound __attribute__((swift_name("compound")));
@property (readonly) NSString *driver __attribute__((swift_name("driver")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString *headshotUrl __attribute__((swift_name("headshotUrl")));
@property (readonly) int32_t lapNumber __attribute__((swift_name("lapNumber")));
@property (readonly) NSString *lapTime __attribute__((swift_name("lapTime")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualifyingResultModel")))
@interface PitlapKitQualifyingResultModel : PitlapKitBase
- (instancetype)initWithTeamName:(NSString *)teamName headshotUrl:(NSString *)headshotUrl q1:(NSString * _Nullable)q1 q2:(NSString * _Nullable)q2 q3:(NSString * _Nullable)q3 position:(int32_t)position fullName:(NSString *)fullName __attribute__((swift_name("init(teamName:headshotUrl:q1:q2:q3:position:fullName:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitQualifyingResultModel *)doCopyTeamName:(NSString *)teamName headshotUrl:(NSString *)headshotUrl q1:(NSString * _Nullable)q1 q2:(NSString * _Nullable)q2 q3:(NSString * _Nullable)q3 position:(int32_t)position fullName:(NSString *)fullName __attribute__((swift_name("doCopy(teamName:headshotUrl:q1:q2:q3:position:fullName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString *headshotUrl __attribute__((swift_name("headshotUrl")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString * _Nullable q1 __attribute__((swift_name("q1")));
@property (readonly) NSString * _Nullable q2 __attribute__((swift_name("q2")));
@property (readonly) NSString * _Nullable q3 __attribute__((swift_name("q3")));
@property (readonly) NSString *teamName __attribute__((swift_name("teamName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QualifyingResultsModel")))
@interface PitlapKitQualifyingResultsModel : PitlapKitBase
- (instancetype)initWithKey:(NSString *)key eventName:(NSString *)eventName results:(NSArray<PitlapKitQualifyingResultModel *> *)results __attribute__((swift_name("init(key:eventName:results:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitQualifyingResultsModel *)doCopyKey:(NSString *)key eventName:(NSString *)eventName results:(NSArray<PitlapKitQualifyingResultModel *> *)results __attribute__((swift_name("doCopy(key:eventName:results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSArray<PitlapKitQualifyingResultModel *> *results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RaceResultModel")))
@interface PitlapKitRaceResultModel : PitlapKitBase
- (instancetype)initWithPosition:(int32_t)position headshotURL:(NSString *)headshotURL points:(int32_t)points gridPosition:(int32_t)gridPosition fullName:(NSString *)fullName classifiedPosition:(NSString *)classifiedPosition teamName:(NSString *)teamName __attribute__((swift_name("init(position:headshotURL:points:gridPosition:fullName:classifiedPosition:teamName:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitRaceResultModel *)doCopyPosition:(int32_t)position headshotURL:(NSString *)headshotURL points:(int32_t)points gridPosition:(int32_t)gridPosition fullName:(NSString *)fullName classifiedPosition:(NSString *)classifiedPosition teamName:(NSString *)teamName __attribute__((swift_name("doCopy(position:headshotURL:points:gridPosition:fullName:classifiedPosition:teamName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *classifiedPosition __attribute__((swift_name("classifiedPosition")));
@property (readonly) NSString *fullName __attribute__((swift_name("fullName")));
@property (readonly) int32_t gridPosition __attribute__((swift_name("gridPosition")));
@property (readonly) NSString *headshotURL __attribute__((swift_name("headshotURL")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *teamName __attribute__((swift_name("teamName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RaceResultsModel")))
@interface PitlapKitRaceResultsModel : PitlapKitBase
- (instancetype)initWithResults:(NSArray<PitlapKitRaceResultModel *> *)results __attribute__((swift_name("init(results:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitRaceResultsModel *)doCopyResults:(NSArray<PitlapKitRaceResultModel *> *)results __attribute__((swift_name("doCopy(results:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PitlapKitRaceResultModel *> *results __attribute__((swift_name("results")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RaceSummaryModel")))
@interface PitlapKitRaceSummaryModel : PitlapKitBase
- (instancetype)initWithSummary:(NSString *)summary __attribute__((swift_name("init(summary:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitRaceSummaryModel *)doCopySummary:(NSString *)summary __attribute__((swift_name("doCopy(summary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *summary __attribute__((swift_name("summary")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackSummaryModel")))
@interface PitlapKitTrackSummaryModel : PitlapKitBase
- (instancetype)initWithFact:(NSString *)fact track:(NSString *)track circuitLengthKm:(float)circuitLengthKm firstRace:(int32_t)firstRace __attribute__((swift_name("init(fact:track:circuitLengthKm:firstRace:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitTrackSummaryModel *)doCopyFact:(NSString *)fact track:(NSString *)track circuitLengthKm:(float)circuitLengthKm firstRace:(int32_t)firstRace __attribute__((swift_name("doCopy(fact:track:circuitLengthKm:firstRace:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float circuitLengthKm __attribute__((swift_name("circuitLengthKm")));
@property (readonly) NSString *fact __attribute__((swift_name("fact")));
@property (readonly) int32_t firstRace __attribute__((swift_name("firstRace")));
@property (readonly) NSString *track __attribute__((swift_name("track")));
@end

__attribute__((swift_name("TrackEventsRepository")))
@protocol PitlapKitTrackEventsRepository
@required

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPracticeLapsYear:(int32_t)year round:(int32_t)round sessionName:(NSString *)sessionName completionHandler:(void (^)(NSArray<PitlapKitGroupedLapModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPracticeLaps(year:round:sessionName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getQualifyingResultsYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(NSArray<PitlapKitQualifyingResultModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getQualifyingResults(year:round:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getRaceResultsYear:(int32_t)year round:(int32_t)round completionHandler:(void (^)(NSArray<PitlapKitRaceResultModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRaceResults(year:round:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventFormatModel")))
@interface PitlapKitEventFormatModel : PitlapKitKotlinEnum<PitlapKitEventFormatModel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitEventFormatModelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitEventFormatModel *conventional __attribute__((swift_name("conventional")));
@property (class, readonly) PitlapKitEventFormatModel *sprint __attribute__((swift_name("sprint")));
@property (class, readonly) PitlapKitEventFormatModel *sprintQualifying __attribute__((swift_name("sprintQualifying")));
@property (class, readonly) PitlapKitEventFormatModel *testing __attribute__((swift_name("testing")));
+ (PitlapKitKotlinArray<PitlapKitEventFormatModel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitEventFormatModel *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventFormatModel.Companion")))
@interface PitlapKitEventFormatModelCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitEventFormatModelCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session1")))
@interface PitlapKitSession1 : PitlapKitKotlinEnum<PitlapKitSession1 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitSession1Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitSession1 *practice1 __attribute__((swift_name("practice1")));
+ (PitlapKitKotlinArray<PitlapKitSession1 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitSession1 *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session1.Companion")))
@interface PitlapKitSession1Companion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitSession1Companion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session2")))
@interface PitlapKitSession2 : PitlapKitKotlinEnum<PitlapKitSession2 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitSession2Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitSession2 *practice2 __attribute__((swift_name("practice2")));
@property (class, readonly) PitlapKitSession2 *sprintQualifying __attribute__((swift_name("sprintQualifying")));
+ (PitlapKitKotlinArray<PitlapKitSession2 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitSession2 *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session2.Companion")))
@interface PitlapKitSession2Companion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitSession2Companion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session3")))
@interface PitlapKitSession3 : PitlapKitKotlinEnum<PitlapKitSession3 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitSession3Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitSession3 *practice3 __attribute__((swift_name("practice3")));
@property (class, readonly) PitlapKitSession3 *sprint __attribute__((swift_name("sprint")));
+ (PitlapKitKotlinArray<PitlapKitSession3 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitSession3 *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session3.Companion")))
@interface PitlapKitSession3Companion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitSession3Companion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session4")))
@interface PitlapKitSession4 : PitlapKitKotlinEnum<PitlapKitSession4 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitSession4Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitSession4 *none __attribute__((swift_name("none")));
@property (class, readonly) PitlapKitSession4 *qualifying __attribute__((swift_name("qualifying")));
+ (PitlapKitKotlinArray<PitlapKitSession4 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitSession4 *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session4.Companion")))
@interface PitlapKitSession4Companion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitSession4Companion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session5")))
@interface PitlapKitSession5 : PitlapKitKotlinEnum<PitlapKitSession5 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitSession5Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitSession5 *none __attribute__((swift_name("none")));
@property (class, readonly) PitlapKitSession5 *race __attribute__((swift_name("race")));
+ (PitlapKitKotlinArray<PitlapKitSession5 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitSession5 *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Session5.Companion")))
@interface PitlapKitSession5Companion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitSession5Companion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PitlapKitKotlinArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventScheduleModel")))
@interface PitlapKitEventScheduleModel : PitlapKitBase
- (instancetype)initWithRound:(int32_t)round country:(NSString *)country officialEventName:(NSString *)officialEventName eventName:(NSString *)eventName eventFormat:(NSString *)eventFormat session1:(NSString *)session1 session1DateUTC:(NSString * _Nullable)session1DateUTC session2:(NSString *)session2 session2DateUTC:(NSString * _Nullable)session2DateUTC session3:(NSString *)session3 session3DateUTC:(NSString * _Nullable)session3DateUTC session4:(NSString *)session4 session4DateUTC:(NSString * _Nullable)session4DateUTC session5:(NSString *)session5 session5DateUTC:(NSString * _Nullable)session5DateUTC year:(NSString *)year __attribute__((swift_name("init(round:country:officialEventName:eventName:eventFormat:session1:session1DateUTC:session2:session2DateUTC:session3:session3DateUTC:session4:session4DateUTC:session5:session5DateUTC:year:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitEventScheduleModel *)doCopyRound:(int32_t)round country:(NSString *)country officialEventName:(NSString *)officialEventName eventName:(NSString *)eventName eventFormat:(NSString *)eventFormat session1:(NSString *)session1 session1DateUTC:(NSString * _Nullable)session1DateUTC session2:(NSString *)session2 session2DateUTC:(NSString * _Nullable)session2DateUTC session3:(NSString *)session3 session3DateUTC:(NSString * _Nullable)session3DateUTC session4:(NSString *)session4 session4DateUTC:(NSString * _Nullable)session4DateUTC session5:(NSString *)session5 session5DateUTC:(NSString * _Nullable)session5DateUTC year:(NSString *)year __attribute__((swift_name("doCopy(round:country:officialEventName:eventName:eventFormat:session1:session1DateUTC:session2:session2DateUTC:session3:session3DateUTC:session4:session4DateUTC:session5:session5DateUTC:year:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *eventFormat __attribute__((swift_name("eventFormat")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *officialEventName __attribute__((swift_name("officialEventName")));
@property (readonly) int32_t round __attribute__((swift_name("round")));
@property (readonly) NSString *session1 __attribute__((swift_name("session1")));
@property (readonly) NSString * _Nullable session1DateUTC __attribute__((swift_name("session1DateUTC")));
@property (readonly) NSString *session2 __attribute__((swift_name("session2")));
@property (readonly) NSString * _Nullable session2DateUTC __attribute__((swift_name("session2DateUTC")));
@property (readonly) NSString *session3 __attribute__((swift_name("session3")));
@property (readonly) NSString * _Nullable session3DateUTC __attribute__((swift_name("session3DateUTC")));
@property (readonly) NSString *session4 __attribute__((swift_name("session4")));
@property (readonly) NSString * _Nullable session4DateUTC __attribute__((swift_name("session4DateUTC")));
@property (readonly) NSString *session5 __attribute__((swift_name("session5")));
@property (readonly) NSString * _Nullable session5DateUTC __attribute__((swift_name("session5DateUTC")));
@property (readonly) NSString *year __attribute__((swift_name("year")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstructorStandingDto")))
@interface PitlapKitConstructorStandingDto : PitlapKitBase
- (instancetype)initWithPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins constructorId:(NSString *)constructorId constructorName:(NSString *)constructorName __attribute__((swift_name("init(position:positionText:points:wins:constructorId:constructorName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitConstructorStandingDtoCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitConstructorStandingDto *)doCopyPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins constructorId:(NSString *)constructorId constructorName:(NSString *)constructorName __attribute__((swift_name("doCopy(position:positionText:points:wins:constructorId:constructorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *constructorId __attribute__((swift_name("constructorId")));
@property (readonly) NSString *constructorName __attribute__((swift_name("constructorName")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *positionText __attribute__((swift_name("positionText")));
@property (readonly) int32_t wins __attribute__((swift_name("wins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstructorStandingDto.Companion")))
@interface PitlapKitConstructorStandingDtoCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitConstructorStandingDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstructorStandingModel")))
@interface PitlapKitConstructorStandingModel : PitlapKitBase
- (instancetype)initWithPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins constructorId:(NSString *)constructorId constructorName:(NSString *)constructorName __attribute__((swift_name("init(position:positionText:points:wins:constructorId:constructorName:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitConstructorStandingModel *)doCopyPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins constructorId:(NSString *)constructorId constructorName:(NSString *)constructorName __attribute__((swift_name("doCopy(position:positionText:points:wins:constructorId:constructorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *constructorId __attribute__((swift_name("constructorId")));
@property (readonly) NSString *constructorName __attribute__((swift_name("constructorName")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *positionText __attribute__((swift_name("positionText")));
@property (readonly) int32_t wins __attribute__((swift_name("wins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverStandingModel")))
@interface PitlapKitDriverStandingModel : PitlapKitBase
- (instancetype)initWithPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins driverId:(NSString *)driverId driverNumber:(int32_t)driverNumber givenName:(NSString *)givenName familyName:(NSString *)familyName constructorName:(NSString *)constructorName __attribute__((swift_name("init(position:positionText:points:wins:driverId:driverNumber:givenName:familyName:constructorName:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitDriverStandingModel *)doCopyPosition:(int32_t)position positionText:(NSString *)positionText points:(int32_t)points wins:(int32_t)wins driverId:(NSString *)driverId driverNumber:(int32_t)driverNumber givenName:(NSString *)givenName familyName:(NSString *)familyName constructorName:(NSString *)constructorName __attribute__((swift_name("doCopy(position:positionText:points:wins:driverId:driverNumber:givenName:familyName:constructorName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *constructorName __attribute__((swift_name("constructorName")));
@property (readonly) NSString *driverId __attribute__((swift_name("driverId")));
@property (readonly) int32_t driverNumber __attribute__((swift_name("driverNumber")));
@property (readonly) NSString *familyName __attribute__((swift_name("familyName")));
@property (readonly) NSString *givenName __attribute__((swift_name("givenName")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *positionText __attribute__((swift_name("positionText")));
@property (readonly) int32_t wins __attribute__((swift_name("wins")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YoutubeVideoModel")))
@interface PitlapKitYoutubeVideoModel : PitlapKitBase
- (instancetype)initWithThumbnailUrl:(NSString * _Nullable)thumbnailUrl title:(NSString *)title description:(NSString *)description videoId:(NSString *)videoId __attribute__((swift_name("init(thumbnailUrl:title:description:videoId:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitYoutubeVideoModel *)doCopyThumbnailUrl:(NSString * _Nullable)thumbnailUrl title:(NSString *)title description:(NSString *)description videoId:(NSString *)videoId __attribute__((swift_name("doCopy(thumbnailUrl:title:description:videoId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property (readonly) NSString *videoId __attribute__((swift_name("videoId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherDto")))
@interface PitlapKitWeatherDto : PitlapKitBase
- (instancetype)initWithYear:(int32_t)year round:(int32_t)round aiSummary:(NSString *)aiSummary condition:(NSString *)condition summary:(NSString *)summary temperature:(float)temperature precipitation:(float)precipitation __attribute__((swift_name("init(year:round:aiSummary:condition:summary:temperature:precipitation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitWeatherDtoCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitWeatherDto *)doCopyYear:(int32_t)year round:(int32_t)round aiSummary:(NSString *)aiSummary condition:(NSString *)condition summary:(NSString *)summary temperature:(float)temperature precipitation:(float)precipitation __attribute__((swift_name("doCopy(year:round:aiSummary:condition:summary:temperature:precipitation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *aiSummary __attribute__((swift_name("aiSummary")));
@property (readonly) NSString *condition __attribute__((swift_name("condition")));
@property (readonly) float precipitation __attribute__((swift_name("precipitation")));
@property (readonly) int32_t round __attribute__((swift_name("round")));
@property (readonly) NSString *summary __attribute__((swift_name("summary")));
@property (readonly) float temperature __attribute__((swift_name("temperature")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherDto.Companion")))
@interface PitlapKitWeatherDtoCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitWeatherDtoCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeatherModel")))
@interface PitlapKitWeatherModel : PitlapKitBase
- (instancetype)initWithCondition:(NSString *)condition summary:(NSString *)summary temperature:(float)temperature precipitation:(float)precipitation __attribute__((swift_name("init(condition:summary:temperature:precipitation:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitWeatherModel *)doCopyCondition:(NSString *)condition summary:(NSString *)summary temperature:(float)temperature precipitation:(float)precipitation __attribute__((swift_name("doCopy(condition:summary:temperature:precipitation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *condition __attribute__((swift_name("condition")));
@property (readonly) float precipitation __attribute__((swift_name("precipitation")));
@property (readonly) NSString *summary __attribute__((swift_name("summary")));
@property (readonly) float temperature __attribute__((swift_name("temperature")));
@end

@interface PitlapKitApiErrorRemote (Extensions)
- (PitlapKitKotlinThrowable *)toThrowable __attribute__((swift_name("toThrowable()")));
@end

@interface PitlapKitWeatherDto (Extensions)
- (PitlapKitWeatherModel *)toModel __attribute__((swift_name("toModel()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientProviderExtensionKt")))
@interface PitlapKitHttpClientProviderExtensionKt : PitlapKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)responseToResultResponse:(PitlapKitKtor_client_coreHttpResponse *)response completionHandler:(void (^)(id<PitlapKitResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("responseToResult(response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)safeCallExecute:(PitlapKitKtor_client_coreHttpResponse *(^)(void))execute completionHandler:(void (^)(id<PitlapKitResult> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("safeCall(execute:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSDatabaseDriverFactoryKt")))
@interface PitlapKitIOSDatabaseDriverFactoryKt : PitlapKitBase
+ (id<PitlapKitDatabaseDriverFactory>)getDatabaseFactory __attribute__((swift_name("getDatabaseFactory()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface PitlapKitPlatform_iosKt : PitlapKitBase
+ (id<PitlapKitPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultKt")))
@interface PitlapKitResultKt : PitlapKitBase
+ (id<PitlapKitResult>)asEmptyDataResult:(id<PitlapKitResult>)receiver __attribute__((swift_name("asEmptyDataResult(_:)")));
+ (id<PitlapKitResult>)map:(id<PitlapKitResult>)receiver map:(id _Nullable (^)(id _Nullable))map __attribute__((swift_name("map(_:map:)")));
+ (id<PitlapKitResult>)onError:(id<PitlapKitResult>)receiver action:(void (^)(id<PitlapKitError>))action __attribute__((swift_name("onError(_:action:)")));
+ (id<PitlapKitResult>)onSuccess:(id<PitlapKitResult>)receiver action:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(_:action:)")));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol PitlapKitRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol PitlapKitRuntimeSqlDriver <PitlapKitRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(PitlapKitKotlinArray<NSString *> *)queryKeys listener:(id<PitlapKitRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (PitlapKitRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<PitlapKitRuntimeQueryResult>)executeIdentifier:(PitlapKitInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PitlapKitRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<PitlapKitRuntimeQueryResult>)executeQueryIdentifier:(PitlapKitInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<PitlapKitRuntimeQueryResult> (^)(id<PitlapKitRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PitlapKitRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<PitlapKitRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(PitlapKitKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(PitlapKitKotlinArray<NSString *> *)queryKeys listener:(id<PitlapKitRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol PitlapKitRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol PitlapKitRuntimeTransactionWithoutReturn <PitlapKitRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<PitlapKitRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol PitlapKitRuntimeTransactionWithReturn <PitlapKitRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<PitlapKitRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol PitlapKitRuntimeSqlSchema
@required
- (id<PitlapKitRuntimeQueryResult>)createDriver:(id<PitlapKitRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<PitlapKitRuntimeQueryResult>)migrateDriver:(id<PitlapKitRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(PitlapKitKotlinArray<PitlapKitRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PitlapKitKotlinUnit : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface PitlapKitRuntimeTransacterTransaction : PitlapKitBase <PitlapKitRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PitlapKitRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PitlapKitRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PitlapKitKotlinThrowable : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PitlapKitKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PitlapKitKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface PitlapKitRuntimeExecutableQuery<__covariant RowType> : PitlapKitBase
- (instancetype)initWithMapper:(RowType (^)(id<PitlapKitRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<PitlapKitRuntimeQueryResult>)executeMapper:(id<PitlapKitRuntimeQueryResult> (^)(id<PitlapKitRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<PitlapKitRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface PitlapKitRuntimeQuery<__covariant RowType> : PitlapKitRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<PitlapKitRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PitlapKitRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<PitlapKitRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PitlapKitKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PitlapKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol PitlapKitKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PitlapKitKtor_ioCloseable <PitlapKitKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PitlapKitKtor_client_coreHttpClient : PitlapKitBase <PitlapKitKotlinx_coroutines_coreCoroutineScope, PitlapKitKtor_ioCloseable>
- (instancetype)initWithEngine:(id<PitlapKitKtor_client_coreHttpClientEngine>)engine userConfig:(PitlapKitKtor_client_coreHttpClientConfig<PitlapKitKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PitlapKitKtor_client_coreHttpClient *)configBlock:(void (^)(PitlapKitKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<PitlapKitKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PitlapKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PitlapKitKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PitlapKitKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PitlapKitKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) PitlapKitKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PitlapKitKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PitlapKitKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PitlapKitKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PitlapKitKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PitlapKitKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PitlapKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PitlapKitKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PitlapKitKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PitlapKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PitlapKitKotlinx_serialization_coreKSerializer <PitlapKitKotlinx_serialization_coreSerializationStrategy, PitlapKitKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PitlapKitKotlinArray<T> : PitlapKitBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PitlapKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PitlapKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PitlapKitKotlinEnumCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinException")))
@interface PitlapKitKotlinException : PitlapKitKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PitlapKitKotlinRuntimeException : PitlapKitKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PitlapKitKotlinIllegalStateException : PitlapKitKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PitlapKitKotlinCancellationException : PitlapKitKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PitlapKitKtor_httpHttpMessage
@required
@property (readonly) id<PitlapKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PitlapKitKtor_client_coreHttpResponse : PitlapKitBase <PitlapKitKtor_httpHttpMessage, PitlapKitKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PitlapKitKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PitlapKitKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) PitlapKitKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PitlapKitKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol PitlapKitRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol PitlapKitRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol PitlapKitRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(PitlapKitBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(PitlapKitKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(PitlapKitDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(PitlapKitLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol PitlapKitRuntimeSqlCursor
@required
- (PitlapKitBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (PitlapKitKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (PitlapKitDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (PitlapKitLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<PitlapKitRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface PitlapKitRuntimeAfterVersion : PitlapKitBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<PitlapKitRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<PitlapKitRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PitlapKitKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PitlapKitKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PitlapKitKotlinCoroutineContextElement> _Nullable)getKey:(id<PitlapKitKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PitlapKitKotlinCoroutineContext>)minusKeyKey:(id<PitlapKitKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PitlapKitKotlinCoroutineContext>)plusContext:(id<PitlapKitKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PitlapKitKtor_client_coreHttpClientEngine <PitlapKitKotlinx_coroutines_coreCoroutineScope, PitlapKitKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PitlapKitKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PitlapKitKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PitlapKitKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PitlapKitKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PitlapKitKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PitlapKitKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PitlapKitKtor_client_coreHttpClientEngineConfig : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property PitlapKitKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PitlapKitKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PitlapKitKtor_client_coreHttpClientConfig<T> : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PitlapKitKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PitlapKitKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<PitlapKitKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PitlapKitKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PitlapKitKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PitlapKitKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PitlapKitKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PitlapKitKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PitlapKitKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PitlapKitKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface PitlapKitKtor_eventsEvents : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(PitlapKitKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<PitlapKitKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(PitlapKitKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(PitlapKitKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PitlapKitKtor_utilsPipeline<TSubject, TContext> : PitlapKitBase
- (instancetype)initWithPhases:(PitlapKitKotlinArray<PitlapKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PitlapKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PitlapKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PitlapKitKtor_utilsPipelinePhase *)reference phase:(PitlapKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PitlapKitKtor_utilsPipelinePhase *)reference phase:(PitlapKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PitlapKitKtor_utilsPipelinePhase *)phase block:(id<PitlapKitKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(PitlapKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(PitlapKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(PitlapKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(PitlapKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PitlapKitKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PitlapKitKtor_client_coreHttpReceivePipeline : PitlapKitKtor_utilsPipeline<PitlapKitKtor_client_coreHttpResponse *, PitlapKitKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PitlapKitKotlinArray<PitlapKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PitlapKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PitlapKitKtor_client_coreHttpRequestPipeline : PitlapKitKtor_utilsPipeline<id, PitlapKitKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PitlapKitKotlinArray<PitlapKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PitlapKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PitlapKitKtor_client_coreHttpResponsePipeline : PitlapKitKtor_utilsPipeline<PitlapKitKtor_client_coreHttpResponseContainer *, PitlapKitKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PitlapKitKotlinArray<PitlapKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PitlapKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PitlapKitKtor_client_coreHttpSendPipeline : PitlapKitKtor_utilsPipeline<id, PitlapKitKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PitlapKitKotlinArray<PitlapKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(PitlapKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PitlapKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PitlapKitKotlinx_serialization_coreEncoder
@required
- (id<PitlapKitKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PitlapKitKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PitlapKitKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PitlapKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PitlapKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PitlapKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PitlapKitKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<PitlapKitKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<PitlapKitKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) PitlapKitKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PitlapKitKotlinx_serialization_coreDecoder
@required
- (id<PitlapKitKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PitlapKitKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PitlapKitKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PitlapKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PitlapKitKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PitlapKitKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PitlapKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PitlapKitKtor_httpHeaders <PitlapKitKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PitlapKitKtor_client_coreHttpClientCall : PitlapKitBase <PitlapKitKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(PitlapKitKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(PitlapKitKtor_client_coreHttpClient *)client requestData:(PitlapKitKtor_client_coreHttpRequestData *)requestData responseData:(PitlapKitKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(PitlapKitKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(PitlapKitKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PitlapKitKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PitlapKitKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<PitlapKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<PitlapKitKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property PitlapKitKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PitlapKitKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(PitlapKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(PitlapKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) PitlapKitKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<PitlapKitKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PitlapKitKtor_utilsGMTDate : PitlapKitBase <PitlapKitKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PitlapKitKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PitlapKitKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PitlapKitKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (PitlapKitKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (PitlapKitKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PitlapKitKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PitlapKitKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PitlapKitKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PitlapKitKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PitlapKitKtor_httpHttpStatusCode : PitlapKitBase <PitlapKitKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PitlapKitKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (PitlapKitKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PitlapKitKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PitlapKitKtor_httpHttpProtocolVersion : PitlapKitBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PitlapKitKotlinByteArray : PitlapKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PitlapKitByte *(^)(PitlapKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PitlapKitKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PitlapKitKotlinCoroutineContextElement <PitlapKitKotlinCoroutineContext>
@required
@property (readonly) id<PitlapKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PitlapKitKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PitlapKitKtor_client_coreHttpRequestData : PitlapKitBase
- (instancetype)initWithUrl:(PitlapKitKtor_httpUrl *)url method:(PitlapKitKtor_httpHttpMethod *)method headers:(id<PitlapKitKtor_httpHeaders>)headers body:(PitlapKitKtor_httpOutgoingContent *)body executionContext:(id<PitlapKitKotlinx_coroutines_coreJob>)executionContext attributes:(id<PitlapKitKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PitlapKitKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PitlapKitKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PitlapKitKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PitlapKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PitlapKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PitlapKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PitlapKitKtor_client_coreHttpResponseData : PitlapKitBase
- (instancetype)initWithStatusCode:(PitlapKitKtor_httpHttpStatusCode *)statusCode requestTime:(PitlapKitKtor_utilsGMTDate *)requestTime headers:(id<PitlapKitKtor_httpHeaders>)headers version:(PitlapKitKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PitlapKitKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PitlapKitKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PitlapKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PitlapKitKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PitlapKitKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PitlapKitKotlinAbstractCoroutineContextElement : PitlapKitBase <PitlapKitKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<PitlapKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PitlapKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PitlapKitKotlinContinuationInterceptor <PitlapKitKotlinCoroutineContextElement>
@required
- (id<PitlapKitKotlinContinuation>)interceptContinuationContinuation:(id<PitlapKitKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PitlapKitKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface PitlapKitKotlinx_coroutines_coreCoroutineDispatcher : PitlapKitKotlinAbstractCoroutineContextElement <PitlapKitKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PitlapKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<PitlapKitKotlinCoroutineContext>)context block:(id<PitlapKitKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<PitlapKitKotlinCoroutineContext>)context block:(id<PitlapKitKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PitlapKitKotlinContinuation>)interceptContinuationContinuation:(id<PitlapKitKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PitlapKitKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (PitlapKitKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (PitlapKitKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(PitlapKitKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PitlapKitKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PitlapKitKtor_client_coreProxyConfig : PitlapKitBase
- (instancetype)initWithUrl:(PitlapKitKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PitlapKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol PitlapKitKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(PitlapKitKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PitlapKitKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PitlapKitKtor_utilsAttributeKey<T> : PitlapKitBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(PitlapKitKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(PitlapKitKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface PitlapKitKtor_eventsEventDefinition<T> : PitlapKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol PitlapKitKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PitlapKitKtor_utilsPipelinePhase : PitlapKitBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PitlapKitKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PitlapKitKotlinSuspendFunction2 <PitlapKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PitlapKitKtor_client_coreHttpReceivePipelinePhases : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PitlapKitKtor_client_coreHttpRequestPipelinePhases : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PitlapKitKtor_httpHttpMessageBuilder
@required
@property (readonly) PitlapKitKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PitlapKitKtor_client_coreHttpRequestBuilder : PitlapKitBase <PitlapKitKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PitlapKitKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PitlapKitKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PitlapKitKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PitlapKitKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PitlapKitKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PitlapKitKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PitlapKitKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PitlapKitKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PitlapKitKtor_httpURLBuilder *, PitlapKitKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property PitlapKitKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<PitlapKitKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PitlapKitKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PitlapKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PitlapKitKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PitlapKitKtor_client_coreHttpResponsePipelinePhases : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PitlapKitKtor_client_coreHttpResponseContainer : PitlapKitBase
- (instancetype)initWithExpectedType:(PitlapKitKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PitlapKitKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PitlapKitKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PitlapKitKtor_client_coreHttpSendPipelinePhases : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PitlapKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PitlapKitKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PitlapKitKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PitlapKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PitlapKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PitlapKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PitlapKitKotlinx_serialization_coreSerializersModule : PitlapKitBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PitlapKitKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PitlapKitKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PitlapKitKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PitlapKitKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PitlapKitKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PitlapKitKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PitlapKitKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PitlapKitKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PitlapKitKotlinx_serialization_coreSerialKind : PitlapKitBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PitlapKitKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PitlapKitKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PitlapKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PitlapKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PitlapKitKotlinNothing : PitlapKitBase
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PitlapKitKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PitlapKitKtor_client_coreHttpClientCallCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface PitlapKitKtor_utilsTypeInfo : PitlapKitBase
- (instancetype)initWithType:(id<PitlapKitKotlinKClass>)type kotlinType:(id<PitlapKitKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<PitlapKitKotlinKClass>)type reifiedType:(id<PitlapKitKotlinKType>)reifiedType kotlinType:(id<PitlapKitKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PitlapKitKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PitlapKitKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PitlapKitKtor_client_coreHttpRequest <PitlapKitKtor_httpHttpMessage, PitlapKitKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<PitlapKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PitlapKitKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PitlapKitKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PitlapKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PitlapKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol PitlapKitKotlinx_io_coreRawSource <PitlapKitKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(PitlapKitKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol PitlapKitKotlinx_io_coreSource <PitlapKitKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<PitlapKitKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(PitlapKitKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<PitlapKitKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<PitlapKitKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) PitlapKitKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PitlapKitKtor_utilsWeekDay : PitlapKitKotlinEnum<PitlapKitKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PitlapKitKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (PitlapKitKotlinArray<PitlapKitKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PitlapKitKtor_utilsMonth : PitlapKitKotlinEnum<PitlapKitKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PitlapKitKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PitlapKitKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PitlapKitKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PitlapKitKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PitlapKitKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PitlapKitKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PitlapKitKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PitlapKitKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PitlapKitKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PitlapKitKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PitlapKitKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PitlapKitKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (PitlapKitKotlinArray<PitlapKitKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PitlapKitKtor_utilsGMTDateCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PitlapKitKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PitlapKitKtor_httpHttpStatusCodeCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PitlapKitKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PitlapKitKtor_httpHttpProtocolVersionCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PitlapKitKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PitlapKitKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PitlapKitKotlinByteIterator : PitlapKitBase <PitlapKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PitlapKitByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol PitlapKitKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PitlapKitKtor_httpUrl : PitlapKitBase <PitlapKitKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) PitlapKitKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PitlapKitKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PitlapKitKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) PitlapKitKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PitlapKitKtor_httpHttpMethod : PitlapKitBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PitlapKitKtor_httpOutgoingContent : PitlapKitBase
- (id _Nullable)getPropertyKey:(PitlapKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PitlapKitKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<PitlapKitKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) PitlapKitLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PitlapKitKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PitlapKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PitlapKitKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol PitlapKitKotlinx_coroutines_coreJob <PitlapKitKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<PitlapKitKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<PitlapKitKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(PitlapKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (PitlapKitKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PitlapKitKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(PitlapKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<PitlapKitKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PitlapKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PitlapKitKotlinx_coroutines_coreJob>)plusOther_:(id<PitlapKitKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<PitlapKitKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PitlapKitKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<PitlapKitKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol PitlapKitKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PitlapKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PitlapKitKotlinAbstractCoroutineContextKey<B, E> : PitlapKitBase <PitlapKitKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PitlapKitKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PitlapKitKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface PitlapKitKotlinx_coroutines_coreCoroutineDispatcherKey : PitlapKitKotlinAbstractCoroutineContextKey<id<PitlapKitKotlinContinuationInterceptor>, PitlapKitKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PitlapKitKotlinCoroutineContextKey>)baseKey safeCast:(id<PitlapKitKotlinCoroutineContextElement> _Nullable (^)(id<PitlapKitKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol PitlapKitKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol PitlapKitKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PitlapKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PitlapKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PitlapKitKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PitlapKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface PitlapKitKtor_utilsStringValuesBuilderImpl : PitlapKitBase <PitlapKitKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PitlapKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PitlapKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PitlapKitKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PitlapKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PitlapKitMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PitlapKitKtor_httpHeadersBuilder : PitlapKitKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PitlapKitKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PitlapKitKtor_client_coreHttpRequestBuilderCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PitlapKitKtor_httpURLBuilder : PitlapKitBase
- (instancetype)initWithProtocol:(PitlapKitKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<PitlapKitKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<PitlapKitKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PitlapKitKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property PitlapKitKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property PitlapKitKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PitlapKitKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PitlapKitKotlinKClass>)kClass provider:(id<PitlapKitKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PitlapKitKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PitlapKitKotlinKClass>)kClass serializer:(id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PitlapKitKotlinKClass>)baseClass actualClass:(id<PitlapKitKotlinKClass>)actualClass actualSerializer:(id<PitlapKitKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PitlapKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PitlapKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<PitlapKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PitlapKitKotlinKClass>)baseClass defaultSerializerProvider:(id<PitlapKitKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PitlapKitKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PitlapKitKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PitlapKitKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PitlapKitKotlinKClass <PitlapKitKotlinKDeclarationContainer, PitlapKitKotlinKAnnotatedElement, PitlapKitKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol PitlapKitKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<PitlapKitKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<PitlapKitKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol PitlapKitKotlinx_io_coreRawSink <PitlapKitKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(PitlapKitKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol PitlapKitKotlinx_io_coreSink <PitlapKitKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<PitlapKitKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<PitlapKitKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(PitlapKitKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) PitlapKitKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface PitlapKitKotlinx_io_coreBuffer : PitlapKitBase <PitlapKitKotlinx_io_coreSource, PitlapKitKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (PitlapKitKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(PitlapKitKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<PitlapKitKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(PitlapKitKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(PitlapKitKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<PitlapKitKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<PitlapKitKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<PitlapKitKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(PitlapKitKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<PitlapKitKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(PitlapKitKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) PitlapKitKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PitlapKitKtor_utilsWeekDayCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PitlapKitKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PitlapKitKtor_utilsMonthCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PitlapKitKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PitlapKitKtor_httpUrlCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<PitlapKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PitlapKitKtor_httpParameters <PitlapKitKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PitlapKitKtor_httpURLProtocol : PitlapKitBase <PitlapKitKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PitlapKitKtor_httpHttpMethodCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<PitlapKitKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PitlapKitKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PitlapKitKtor_httpHeaderValueWithParameters : PitlapKitBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PitlapKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PitlapKitKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PitlapKitKtor_httpContentType : PitlapKitKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PitlapKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PitlapKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PitlapKitKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PitlapKitKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PitlapKitKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PitlapKitKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol PitlapKitKotlinx_coroutines_coreChildHandle <PitlapKitKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(PitlapKitKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<PitlapKitKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol PitlapKitKotlinx_coroutines_coreChildJob <PitlapKitKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<PitlapKitKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PitlapKitKotlinSequence
@required
- (id<PitlapKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol PitlapKitKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) PitlapKitKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<PitlapKitKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(PitlapKitKotlinThrowable *, id _Nullable, id<PitlapKitKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<PitlapKitKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol PitlapKitKotlinx_coroutines_coreSelectClause0 <PitlapKitKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PitlapKitKtor_httpURLBuilderCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol PitlapKitKtor_httpParametersBuilder <PitlapKitKtor_utilsStringValuesBuilder>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PitlapKitKotlinKTypeProjection : PitlapKitBase
- (instancetype)initWithVariance:(PitlapKitKotlinKVariance * _Nullable)variance type:(id<PitlapKitKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PitlapKitKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (PitlapKitKotlinKTypeProjection *)doCopyVariance:(PitlapKitKotlinKVariance * _Nullable)variance type:(id<PitlapKitKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PitlapKitKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PitlapKitKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PitlapKitKtor_httpURLProtocolCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) PitlapKitKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PitlapKitKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PitlapKitKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PitlapKitKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PitlapKitKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PitlapKitKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PitlapKitKtor_httpHeaderValueParam : PitlapKitBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (PitlapKitKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PitlapKitKtor_httpHeaderValueWithParametersCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PitlapKitKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PitlapKitKtor_httpContentTypeCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (PitlapKitKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PitlapKitKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol PitlapKitKotlinx_coroutines_coreParentJob <PitlapKitKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (PitlapKitKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol PitlapKitKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<PitlapKitKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<PitlapKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PitlapKitKotlinKVariance : PitlapKitKotlinEnum<PitlapKitKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PitlapKitKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PitlapKitKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PitlapKitKotlinKVariance *out __attribute__((swift_name("out")));
+ (PitlapKitKotlinArray<PitlapKitKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PitlapKitKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PitlapKitKotlinKTypeProjectionCompanion : PitlapKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PitlapKitKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PitlapKitKotlinKTypeProjection *)contravariantType:(id<PitlapKitKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PitlapKitKotlinKTypeProjection *)covariantType:(id<PitlapKitKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PitlapKitKotlinKTypeProjection *)invariantType:(id<PitlapKitKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) PitlapKitKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
