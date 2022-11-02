<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace thrift\annotation;

/**
 * Original thrift struct:-
 * InjectMetadataFields
 */
<<\ThriftTypeInfo(shape('uri' => 'facebook.com/thrift/annotation/InjectMetadataFields'))>>
class InjectMetadataFields implements \IThriftSyncStruct, \IThriftStructMetadata {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'type',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'type' => 1,
  ];

  const type TConstructorShape = shape(
    ?'type' => ?string,
  );

  const int STRUCTURAL_ID = 75466648195691209;
  /**
   * Original thrift field:-
   * 1: string type
   */
  public string $type;

  public function __construct(?string $type = null)[] {
    $this->type = $type ?? '';
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'type'),
    );
  }

  public function getName()[]: string {
    return 'InjectMetadataFields';
  }

  public function clearTerseFields()[write_props]: void {
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "internal.InjectMetadataFields",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "type",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[write_props]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\thrift\annotation\Struct' => \thrift\annotation\Struct::fromShape(
          shape(
          )
        ),
        '\thrift\annotation\Experimental' => \thrift\annotation\Experimental::fromShape(
          shape(
          )
        ),
      ],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

}

