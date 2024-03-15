<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * BadService
 */
interface BadServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * i32
   *   bar();
   */
  public function bar(): Awaitable<int>;
}

/**
 * Original thrift service:-
 * BadService
 */
interface BadServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * i32
   *   bar();
   */
  public function bar(): int;
}

/**
 * Original thrift service:-
 * BadService
 */
interface BadServiceAsyncClientIf extends BadServiceAsyncIf {
}

/**
 * Original thrift service:-
 * BadService
 */
interface BadServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * i32
   *   bar();
   */
  public function bar(): Awaitable<int>;
}

/**
 * Original thrift service:-
 * BadService
 */
trait BadServiceClientBase {
  require extends \ThriftClientBase;

  /* interaction handlers factory methods */
  public function createBadInteraction(): BadService_BadInteraction {
    $interaction = new BadService_BadInteraction($this->input_, $this->output_, $this->channel_);
    $interaction->setAsyncHandler($this->asyncHandler_)->setEventHandler($this->eventHandler_);
    return $interaction;
  }

}

class BadServiceAsyncClient extends \ThriftClientBase implements BadServiceAsyncClientIf {
  use BadServiceClientBase;

  /**
   * Original thrift definition:-
   * i32
   *   bar();
   */
  public async function bar(): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = BadService_bar_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("BadService", "bar", $args);
    $currentseqid = $this->sendImplHelper($args, "bar", false);
    return await $this->genAwaitResponse(BadService_bar_result::class, "bar", false, $currentseqid, $rpc_options);
  }

}

class BadServiceClient extends \ThriftClientBase implements BadServiceClientIf {
  use BadServiceClientBase;

  /**
   * Original thrift definition:-
   * i32
   *   bar();
   */
  public async function bar(): Awaitable<int> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    $args = BadService_bar_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("BadService", "bar", $args);
    $currentseqid = $this->sendImplHelper($args, "bar", false);
    return await $this->genAwaitResponse(BadService_bar_result::class, "bar", false, $currentseqid, $rpc_options);
  }

  /* send and recv functions */
  public function send_bar(): int {
    $args = BadService_bar_args::withDefaultValues();
    return $this->sendImplHelper($args, "bar", false);
  }
  public function recv_bar(?int $expectedsequenceid = null): int {
    return $this->recvImplHelper(BadService_bar_result::class, "bar", false, $expectedsequenceid);
  }
}

// INTERACTION HANDLERS

class BadService_BadInteraction extends \ThriftClientBase {
  private \InteractionId $interactionId;

  public function __construct(\TProtocol $input, ?\TProtocol $output = null, ?\IThriftMigrationAsyncChannel $channel = null)[leak_safe] {
    parent::__construct($input, $output, $channel);
    if ($this->channel_ is nonnull) {
      $this->interactionId = $this->channel_->createInteraction("BadInteraction");
    } else {
      throw new \Exception("The channel must be nonnull to create interactions.");
    }
  }

  /**
   * Original thrift definition:-
   * void
   *   foo();
   */
  public async function foo(): Awaitable<void> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? new \RpcOptions();
    $rpc_options = $rpc_options->setInteractionId($this->interactionId);
    $args = BadService_BadInteraction_foo_args::withDefaultValues();
    await $this->asyncHandler_->genBefore("BadService", "BadInteraction.foo", $args);
    $currentseqid = $this->sendImpl_foo();
    await $this->genAwaitResponse(BadService_BadInteraction_foo_result::class, "foo", true, $currentseqid, $rpc_options);
  }

  protected function sendImpl_foo(): int {
    $currentseqid = $this->getNextSequenceID();
    $args = BadService_BadInteraction_foo_args::withDefaultValues();
    try {
      $this->eventHandler_->preSend('BadInteraction.foo', $args, $currentseqid);
      if ($this->output_ is \TBinaryProtocolAccelerated)
      {
        \thrift_protocol_write_binary($this->output_, 'BadInteraction.foo', \TMessageType::CALL, $args, $currentseqid, $this->output_->isStrictWrite(), false);
      }
      else if ($this->output_ is \TCompactProtocolAccelerated)
      {
        \thrift_protocol_write_compact2($this->output_, 'BadInteraction.foo', \TMessageType::CALL, $args, $currentseqid, false, \TCompactProtocolBase::VERSION);
      }
      else
      {
        $this->output_->writeMessageBegin('BadInteraction.foo', \TMessageType::CALL, $currentseqid);
        $args->write($this->output_);
        $this->output_->writeMessageEnd();
        $this->output_->getTransport()->flush();
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->sendError('BadInteraction.foo', $args, $currentseqid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postSend('BadInteraction.foo', $args, $currentseqid);
          return $currentseqid;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->sendError('BadInteraction.foo', $args, $currentseqid, $ex);
      throw $ex;
    }
    $this->eventHandler_->postSend('BadInteraction.foo', $args, $currentseqid);
    return $currentseqid;
  }
}

trait BadServiceGetThriftServiceMetadata {
  private function process_getThriftServiceMetadataHelper(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $reply_type = \TMessageType::REPLY;

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, '\tmeta_ThriftMetadataService_getThriftServiceMetadata_args');
    } else {
      $args = \tmeta_ThriftMetadataService_getThriftServiceMetadata_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $result = \tmeta_ThriftMetadataService_getThriftServiceMetadata_result::withDefaultValues();
    try {
      $result->success = BadServiceStaticMetadata::getServiceMetadataResponse();
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'getThriftServiceMetadata', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("getThriftServiceMetadata", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
  }
}
abstract class BadServiceAsyncProcessorBase extends \ThriftAsyncProcessor {
  use BadServiceGetThriftServiceMetadata;
  abstract const type TThriftIf as BadServiceAsyncIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = BadServiceStaticMetadata::class;
  const string THRIFT_SVC_NAME = 'BadService';

  protected async function process_bar(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $handler_ctx = $this->eventHandler_->getHandlerContext('bar');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'bar', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'BadService_bar_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'BadService_bar_args');
    } else {
      $args = BadService_bar_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'bar', $args);
    $result = BadService_bar_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'BadService', 'bar', $args);
      $result->success = await $this->handler->bar();
      $this->eventHandler_->postExec($handler_ctx, 'bar', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'bar', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'bar', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'bar', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'bar', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("bar", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'bar', $result);
  }
  protected async function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): Awaitable<void> {
    $this->process_getThriftServiceMetadataHelper($seqid, $input, $output);
  }
}
class BadServiceAsyncProcessor extends BadServiceAsyncProcessorBase {
  const type TThriftIf = BadServiceAsyncIf;
}

abstract class BadServiceSyncProcessorBase extends \ThriftSyncProcessor {
  use BadServiceGetThriftServiceMetadata;
  abstract const type TThriftIf as BadServiceIf;
  const classname<\IThriftServiceStaticMetadata> SERVICE_METADATA_CLASS = BadServiceStaticMetadata::class;
  const string THRIFT_SVC_NAME = 'BadService';

  protected function process_bar(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $handler_ctx = $this->eventHandler_->getHandlerContext('bar');
    $reply_type = \TMessageType::REPLY;

    $this->eventHandler_->preRead($handler_ctx, 'bar', dict[]);

    if ($input is \TBinaryProtocolAccelerated) {
      $args = \thrift_protocol_read_binary_struct($input, 'BadService_bar_args');
    } else if ($input is \TCompactProtocolAccelerated) {
      $args = \thrift_protocol_read_compact_struct($input, 'BadService_bar_args');
    } else {
      $args = BadService_bar_args::withDefaultValues();
      $args->read($input);
    }
    $input->readMessageEnd();
    $this->eventHandler_->postRead($handler_ctx, 'bar', $args);
    $result = BadService_bar_result::withDefaultValues();
    try {
      $this->eventHandler_->preExec($handler_ctx, 'BadService', 'bar', $args);
      $result->success = $this->handler->bar();
      $this->eventHandler_->postExec($handler_ctx, 'bar', $result);
    } catch (\Exception $ex) {
      $reply_type = \TMessageType::EXCEPTION;
      $this->eventHandler_->handlerError($handler_ctx, 'bar', $ex);
      $result = new \TApplicationException($ex->getMessage()."\n".$ex->getTraceAsString());
    }
    $this->eventHandler_->preWrite($handler_ctx, 'bar', $result);
    if ($output is \TBinaryProtocolAccelerated)
    {
      \thrift_protocol_write_binary($output, 'bar', $reply_type, $result, $seqid, $output->isStrictWrite());
    }
    else if ($output is \TCompactProtocolAccelerated)
    {
      \thrift_protocol_write_compact2($output, 'bar', $reply_type, $result, $seqid, false, \TCompactProtocolBase::VERSION);
    }
    else
    {
      $output->writeMessageBegin("bar", $reply_type, $seqid);
      $result->write($output);
      $output->writeMessageEnd();
      $output->getTransport()->flush();
    }
    $this->eventHandler_->postWrite($handler_ctx, 'bar', $result);
  }
  protected function process_getThriftServiceMetadata(int $seqid, \TProtocol $input, \TProtocol $output): void {
    $this->process_getThriftServiceMetadataHelper($seqid, $input, $output);
  }
}
class BadServiceSyncProcessor extends BadServiceSyncProcessorBase {
  const type TThriftIf = BadServiceIf;
}
// For backwards compatibility
class BadServiceProcessor extends BadServiceSyncProcessor {}

// HELPER FUNCTIONS AND STRUCTURES

class BadService_bar_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'BadService_bar_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.bar_args",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class BadService_bar_result extends \ThriftSyncStructWithResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const type TResult = int;

  const \ThriftStructTypes::TSpec SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?this::TResult,
  );

  const int STRUCTURAL_ID = 3865318819874171525;
  public ?this::TResult $success;

  public function __construct(?this::TResult $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public function getName()[]: string {
    return 'BadService_bar_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.BadService_bar_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $_tmp0 = (int)HH\FIXME\UNSAFE_CAST<mixed, int>($parsed['success']);
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->success = (int)$_tmp0;
      }
    }
  }

}

class BadService_BadInteraction_foo_args implements \IThriftSyncStruct, \IThriftStructMetadata, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'BadService_BadInteraction_foo_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.foo_args",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class BadService_BadInteraction_foo_result extends \ThriftSyncStructWithoutResult implements \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const \ThriftStructTypes::TSpec SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'BadService_BadInteraction_foo_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.BadService_BadInteraction_foo_result",
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

  }

}

class BadServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "module.BadService",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "bar",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'module',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TServiceAnnotations {
    return shape(
      'service' => dict[
        '\facebook\thrift\annotation\cpp\Name' => \facebook\thrift\annotation\cpp\Name::fromShape(
          shape(
            "value" => "GoodService",
          )
        ),
      ],
      'functions' => dict[
      ],
    );
  }
}

