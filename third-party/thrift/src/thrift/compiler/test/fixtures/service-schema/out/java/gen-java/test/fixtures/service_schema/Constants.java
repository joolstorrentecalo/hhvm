/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.service_schema;

import com.facebook.swift.codec.*;
import com.google.common.collect.*;
import java.util.*;

@SwiftGenerated
public final class Constants {
    private Constants() {}

    public static final byte[] _FBTHRIFT_SCHEMA = "\031�\034\030\006module\000\026���˟����\001\031&���شȞ��\001�\u00f9�ֻ���#Y8\020S\006*����\025crk\031\013k\013�\020��\031\033ّj\024���}b��\020k�57甴�2:�Z�E\021�\010\n>thrift/compiler/test/fixtures/service-schema/src/module.thrift+\001�\njava.swift\034test.fixtures.service_schema\000\034\030\006thrift\030\036facebook.com/thrift/annotation\000\026���شȞ��\001\031\026����󇟗�\001Y\u00f8\021\020�u���P\002�2��.z\010Z}\020v�H,n�4e��\035\013�0%\020�E�/P\\�\000,\035�)��\032�\020\u00f9�n��j����\036�`�;m\020�fI\\b\0139&]) 9\001�\010�\020*�\002\034h�\"�\u00fbU�|\u00fbES�\020�\001�\u00fb\"�\032�Q��2x�\027�\020�5\u00fc�0��Д�_�=_��\020�E�\002��,\004�,��,��\030\020�\023בT�F0s���'��E\020\023\033�|t[�#�S\007�jr:�\020U\025m\002Kڛ\017�\005����Fl\020\030�C��\014T����ֿI֋\020*\u00f9A��\003�\013�y[�0�\017�\020\000P�=�w��0�&���)\020(#<�o<#�\021%'\u00faA�j�\020�5\020D�K� �$X�B5��\010\n\037thrift/annotation/thrift.thrift+\006�\007android)com.facebook.thrift.annotation_deprecated\002go\030thrift.annotation.thrift\004java)com.facebook.thrift.annotation_deprecated\002js\030thrift.annotation.thrift\002py\030thrift.annotation.thrift\npy.asyncio)facebook_thrift_asyncio.annotation.thrift\000\034\030\005scope\030\036facebook.com/thrift/annotationL\030�\003Annotations that indicate which IDL definition a structured annotation can\nbe placed on.\n\nFor example:\n  include \"thrift/annotation/scope.thrift\"\n\n  @scope.Struct\n  struct MyStructAnnotation {...}\n\n  @MyStructAnnotation // Good.\n  struct Foo{\n    @MyStructAnnotation // Compile-time failure. MyStructAnnotation is not\n                        // allowed on fields.\n    1: i32 my_field;\n  }\n\034\026����󇟗�\001\025&\025\002\025F\025\010\000\000\000\026����󇟗�\001i\u00f8\021\020�ŠW~\u00fe� D#9\035��8�\020�_A��\017U���T3v�\017\020\003&]���\025�\013f�\026�\033{\020\024PkO\005��EW��\u00fc\004\021�\0201��\u00fa�\\�V�ړ w�G\0208 ���,h�϶#h\013\030A\020�h�?�ʢ^\004��ƙU~\020���≐-8�\031\032\013���^\020S��&� \011�\014B ��P�\022\020g�\032\011Ӌ��[.�C�y��\020r�Tϵ����\006�ĩ{��\0204\013F�>3-���e0�Qn\u00f8\020Q&9�j\u00fdA��c�\u00fa���\020L}�\024���a��v�-<�\023\020�\037�i\010�\u00fe�O7�N��#*\020��(��j0�V\036�\032�C�d\020�)�\u00ff���Ϲ[�5�~:\010\n\036thrift/annotation/scope.thrift+\006�\007android)com.facebook.thrift.annotation_deprecated\002go\027thrift.annotation.scope\004java)com.facebook.thrift.annotation_deprecated\002js\027thrift.annotation.scope\002py\027thrift.annotation.scope\npy.asyncio(facebook_thrift_asyncio.annotation.scope\000\034\030\006schema\030\030facebook.com/thrift/typek\002�+facebook.com/thrift/annotation/Experimental\000)facebook.com/thrift/annotation/TerseWrite\000\014\014\030�\005The canonical representations for a Thrift schema.\n\nThe definitions in this file contain the absolute minimal amount of\ninformation needed to work with a 'dynamic' thrift value (e.g., one where the\ntype is only known at runtime).\n\n\nNote that, while an AST representation may reuse some of the definitions from\nthis file, it has significantly different design goals. For example, an ideal\nAST representation is a ~pure representation of the source file, with as\nlittle 'interpretation' as possible. While a 'schema' is the result of\nperforming semantic analysis on an AST, to distill the result of interpreting\nthe source file in to the representations found in this file.\n\034\026�\u00f9�ֻ���#\0254\025\002\025P\025\010\000\000\000\026�\u00f9�ֻ���#\031����\u00fa����\001���Ȇŋ��\001���شȞ��\001������e�愐�僢\025���ý��\001άÝ����7����\u00ff���tY\u00f8-\020f\014eQ\002�cp\010kC֬Yט\020=��]�Q�K\037&JV�\013K�\020�(\004�k�p\031��$�!�`\020\023WM}V\u00f8\010\011�4\u00fcˍ\u00f9\u00fa/\020M�\020�\013M�ؘI4���N\020�ߜ�\036�\033mOZ�MlZ\020\001��,\020s@\025\u00fe�\006����\020��k�-u�\005��s�9�[\023\020b�\013%�\n�H�w��\021�O�\020���\0043\015\033�L 6�\u00ff�'\u00fe\020+1�� �c'\014')va�0\026\020�@�I���5}�Ў{�-\u00f9\020\0154j�\u00fc���g�\011�z@o\020��&�\"L�\017�^m^�\020�(��(�\u00fa\002�\016\016��\035��\020e�\032>��ۋf\031�\006�ſ\020o#&�U)x\u00fc��n\005���\020\001\\�\005p�\030��T��U���\020�=x���qs��.\033\005\024B\020�$��9A��1�\007< 2h�\020iM�*\017��\u00ffT��p�?\022�\020�u�d}�B\u00ff=@X�y�f�\020�{q#\025yS��ѿkN\014��\020\006a�\0175���\n�O\004X\004��\020�E��+X��t��\035�S�\020>B�\\��\u00feޏ�4\007\026\u00fe�\011\020�P�*��h[��ag'�'B\020e�68��*{/ߥa\033U��\020b\023\u00faD�\001F\020<@Lt���[\020�!\033�()�\032T�\004�^�\030P\020,\027z\"Q\033}�\u00f8(���U��\020\020\013�}���\015���g�k�\020�:�\"\u00f84���t�\023�s4�\020���\006\0255/�\010�%ǀ8\020�\001\001�5C�_����aQ�\020��A\026F\u00fe\011b�<�+�\005�\020,\u00fdɏK��\023v\027\023pV�9�\020�}`\0101>��J�W�Pۻ�\020\"�\007k�����-\011���҈\020���w\u00f9��Y��%�\010��\\\020:\015�ˊ�z��aX6�\u00fc+�\0207��k\004d!Q�+\000�\014\"�\036\020y�\022���y�\010�az4P��\020��\036���\017ױ�c�\032�Cl\020�@7OI*�fHNI4��xF\010\n\037thrift/lib/thrift/schema.thrift+\004�\004cpp2\022apache.thrift.type\002go\030thrift.lib.thrift.schema\njava.swift\030com.facebook.thrift.type\003py3\022apache.thrift.type\000\034\030\004hack\030#facebook.com/thrift/annotation/hack\000\026���\u00fa����\001\031\026����󇟗�\001Y�\020�\025�\"/Rb���5[\u00fdI�\020\u00ff�ӪV�Sͣ3�*�\033\014\0209��뚠���\011�Yt��\020�Az�PJ�\004��Y��WL�\020�\u00ff�h�q�{\031\030\023���J|\020wi#�=��S:\024Et��Z�\020M�K�q�#�ǥ�zK\015N�\020'eN�\016[\013�co\u00fa�<��p\020����H��ǀ5]'Xۉ\020qޗ�(\u00fcY\u00fa�\006W}-ت�\010\n\035thrift/annotation/hack.thrift+\006�\007android.com.facebook.thrift.annotation.hack_deprecated\002go\026thrift.annotation.hack\003hs2\037facebook.thrift.annotation.hack\004java.com.facebook.thrift.annotation.hack_deprecated\002py\026thrift.annotation.hack\npy.asyncio'facebook_thrift_asyncio.annotation.hack\000\034\030\003cpp\030\"facebook.com/thrift/annotation/cpp\000\026���Ȇŋ��\001\031&����󇟗�\001���شȞ��\001Y\u00f8\024\020`�\u00fd�)O\021E���pY�9h\020d?@\036�id�l\033��\021��@\0209҃(٬�]=\u00f8[-��#h\020l�6�G$2Q�\u00f9鋱\006�\020�\031\u00f8�C/�}��p\u00fc6�0\020R6��<��?xYE\030)��>\020�:�N~\022�ː�Z&0�?�\020:�\u00fa��Kgmå�[+^2�\020�\025`�J\020w�\023|�\025\021�T�\020��x�4|�^�yyO��߅\020�ީ9#�qو��`nw�\020K\016��\023���\011f}xXf�m\020��`9\034�c\021A�l���9�\020����@d��ߓ�\037�\036]�\020b\032W���e�([asX{W\006\020ADb\027�%&rk�&�7�[{\020� �\010w\011ϼ\011\n\003@�\013yJ\020� ݬZ��\016\027��5SZ�)\020T�쎧и[ϗs�M:\035�\020 ��\015�y!*�1�\0207�\005�\010\n\034thrift/annotation/cpp.thrift+\006�\007android-com.facebook.thrift.annotation.cpp_deprecated\002go\025thrift.annotation.cpp\004java-com.facebook.thrift.annotation.cpp_deprecated\002js\025thrift.annotation.cpp\002py\025thrift.annotation.cpp\npy.asyncio&facebook_thrift_asyncio.annotation.cpp\000\034\030\002id\030\030facebook.com/thrift/typek\002�+facebook.com/thrift/annotation/Experimental\000)facebook.com/thrift/annotation/TerseWrite\000\000\026������e\031&���Ȇŋ��\001���شȞ��\001Y�\020��iL�L\036;���3T�\020�Y�\0068\u00f9�#��\020�\026��\017\020�[1g��I#r44���VK\020�N4`F��܆��\016��\u00fe\023\020�A�3\010�m8Ig�K*\023�\020\u00f8�|WC]3)\001��Hq�\u00f9�\020�X<�~\015�\010Q\005{�\021���\020�:��\003�=;��\021\017��\020����f�O�\014����l\006w\010\n\033thrift/lib/thrift/id.thrift\033\001�\003cpp\030\035thrift/lib/thrift/detail/id.h\033\011�\004cpp2\022apache.thrift.type\002go\024thrift.lib.thrift.id\004java\030com.facebook.thrift.type\njava.swift\033com.facebook.thrift.type_id\002js\022apache.thrift.type\003php\025apache_thrift_type_id\002py\024thrift.lib.thrift.id\npy.asyncio\030apache_thrift_asyncio.id\003py3\022apache.thrift.type\000\034\030\010standard\030\030facebook.com/thrift/typek\002�+facebook.com/thrift/annotation/Experimental\000)facebook.com/thrift/annotation/TerseWrite\000\014\014\030;The **standard** types all Thrift implementations support.\n\034\026�愐�僢\025\0250\025\002\0250\025�\001\000\000\000\026�愐�僢\025\0316���شȞ��\001ƿ\u00fa��\u00fb�1���Ȇŋ��\001Yh\020\014���\032R~j�\022t�&�F�\020#�����U/|ì\u00fc2o�V\020\017���ʝ���^\032�^��\033\020+�A�!���\033�gҿ��9\020���C;�[I��ɮ�\006\031�\020��s\006ôp���x\022�d(�\010\n!thrift/lib/thrift/standard.thrift\033\001�\003cpp(\022<folly/io/IOBuf.h>\022<folly/FBString.h>\033\011�\004cpp2\022apache.thrift.type\002go\032thrift.lib.thrift.standard\004java\030com.facebook.thrift.type\njava.swift!com.facebook.thrift.standard_type\002js\022apache.thrift.type\003php\033apache_thrift_type_standard\002py\032thrift.lib.thrift.standard\npy.asyncio\036apache_thrift_asyncio.standard\003py3\022apache.thrift.type\000\034\030\004java\030#facebook.com/thrift/annotation/java\000\026ƿ\u00fa��\u00fb�1\031\026����󇟗�\001Yx\020b\022�u\034��\022��鋫�~1\020|\u00faJ,{\033x!�Z+U���\013\020\000\033�6�F�Z'{ 4)�օ\020T���fcW'\024aD)�4�t\020��|C����\024��\020f�E\020*��\022��/\006\011��\u00fa�\020�}�m՚��I�?\004\017\002��\010\n\035thrift/annotation/java.thrift+\006�\007android.com.facebook.thrift.annotation.java_deprecated\002go\026thrift.annotation.java\004java.com.facebook.thrift.annotation.java_deprecated\002js\026thrift.annotation.java\002py\026thrift.annotation.java\npy.asyncio'facebook_thrift_asyncio.annotation.java\000\034\030\010protocol\030\034facebook.com/thrift/protocolk\001�+facebook.com/thrift/annotation/Experimental\000\000\026���ý��\001\031v���Ȇŋ��\001���شȞ��\001������e�û��전\014άÝ����7�愐�僢\025����\u00ff���tYX\0203J�\011�����R97߿�_\020�%M��L\037\022vu|��\035M\020Y�\u00fauB\\H��\006\025B�\017ъ\020C\027e;\u00fb@�?��^D���\036\020J4�f���\013��D�fK�,\010\n!thrift/lib/thrift/protocol.thrift\033\001�\003cpp(\030folly/container/F14Map.h\035thrift/lib/thrift/detail/id.h\033\007�\004cpp2\026apache.thrift.protocol\002go\032thrift.lib.thrift.protocol\njava.swift\"com.facebook.thrift.protocol_swift\003php\026apache_thrift_protocol\002py\032thrift.lib.thrift.protocol\npy.asyncio\036apache_thrift_asyncio.protocol\003py3\026apache.thrift.protocol\000\034\030\017protocol_detail\030#facebook.com/thrift/protocol/detailk\001�+facebook.com/thrift/annotation/Experimental\000\000\026�û��전\014\031F���شȞ��\001�愐�僢\025���Ȇŋ��\001���\u00fa����\001YH\020Ӡ��\u00fbӺ�\u00fc�\007`�[�\020�ޫ\017�\015\016�\021\015��e�NL\020}��\021�\035�\006Yu��B�\016�\0201\001�\011u\023��%O��Ƨ��\010\n(thrift/lib/thrift/protocol_detail.thrift\033\001�\003cpp8#thrift/lib/thrift/detail/protocol.h\030folly/container/F14Map.h\030folly/container/F14Set.h\033\007�\004cpp2\035apache.thrift.protocol.detail\002go!thrift.lib.thrift.protocol_detail\njava.swift)com.facebook.thrift.protocol_detail_swift\003php\035apache_thrift_protocol.detail\002py!thrift.lib.thrift.protocol_detail\npy.asyncio%apache_thrift_asyncio.protocol_detail\003py3\035apache.thrift.protocol.detail\000\034\030\004type\030\030facebook.com/thrift/typek\002�+facebook.com/thrift/annotation/Experimental\000)facebook.com/thrift/annotation/TerseWrite\000\014\014\0307Canonical representations for well-known Thrift types.\n\034\026άÝ����7\0254\025\002\0254\025|\000\000\000\026άÝ����7\031F���Ȇŋ��\001���\u00fa����\001���شȞ��\001�ƒ���ŀYYX\020��\024B�j<4�Q}+@�#�\020\"M��V�#ܠs��\011��\u00fa\020��\024m�7\013ǩ\u00fc��h\006ֱ\0206\014���\005)���A���Y�\020N�\032\011����ʢ�=\017��u\010\n\035thrift/lib/thrift/type.thrift\033\001�\003cpp8!<thrift/lib/cpp2/type/BaseType.h>!<thrift/lib/cpp2/type/Protocol.h>\035<thrift/lib/cpp2/type/Type.h>\033\007�\004cpp2\022apache.thrift.type\002go\026thrift.lib.thrift.type\njava.swift\036com.facebook.thrift.type_swift\003php\022apache_thrift_type\002py\026thrift.lib.thrift.type\npy.asyncio\032apache_thrift_asyncio.type\003py3\022apache.thrift.type\000\034\030\010type_rep\030\030facebook.com/thrift/typek\001�+facebook.com/thrift/annotation/Experimental\000\014\014\030�\003The **underlying representations** for well-known Thrift types.\n\nThe following definitions are provided as unadapted underlying\nrepresentations for 'public' adapted typedefs defined in 'type.thrift'.\n\nThese definitions are named after their representations, using the form\n'{name}{Type}. For example, for a 'public' exception `Foo`, the underlying\ntype would be `exception FooException`.\n\034\026�ƒ���ŀY\025,\025\002\025>\025\010\000\000\000\026�ƒ���ŀY\031F���شȞ��\001������e�愐�僢\025����\u00ff���tY(\020k\027�c?���o���z��\003\020T\u00fc\032R+\035Ev]���_�Q�\010\n!thrift/lib/thrift/type_rep.thrift+\010�\004cpp2\022apache.thrift.type\002go\032thrift.lib.thrift.type_rep\njava.swift\036com.facebook.thrift.type_swift\002js\022apache.thrift.type\003php\026apache_thrift_type_rep\002py\032thrift.lib.thrift.type_rep\npy.asyncio\036apache_thrift_asyncio.type_rep\003py3\022apache.thrift.type\000\034\030\006python\030%facebook.com/thrift/annotation/python\000\026����\u00ff���t\031\026����󇟗�\001YX\020/��O�JA��D[�PU\036�\020�8D5\u00ff.`\027Z�﵌2/\u00fa\020\016>��\001�(��\026�B�U�\u00fd\020AY |�\022Tٕ\026\0101\026\036&�\020�7\0030�P��\"lf�Ch�F\010\n\037thrift/annotation/python.thrift+\005�\007android0com.facebook.thrift.annotation.python_deprecated\002go\030thrift.annotation.python\004java0com.facebook.thrift.annotation.python_deprecated\002py\030thrift.annotation.python\npy.asyncio)facebook_thrift_asyncio.annotation.python\000{\003�\020S\006*����\025crk\031\013k\013�L\034\030\006Resultl\026���˟����\001\025,\025\002\0254\025\004\000\000\031<\034\030\002OKl\026���˟����\001\025.\025\006\025.\025\024\000\000\000\034\030\005SO_SOl\026���˟����\001\0250\025\006\0250\025\032\000\000\025\002\000\034\030\004GOODl\026���˟����\001\0252\025\006\0252\025\030\000\000\025\004\000\000\000\020k�57甴�2:�Z�E\021�|\034\030\021PrimitivesService{\001�4facebook.com/thrift/annotation/GenerateRuntimeSchema\000\014\016\026���˟����\001\025@\025\002\025J\025\004\000\000\031<<\030\004initl\026���˟����\001\025D\025\006\025D\025T\000\000\034\031,\024\002,\034U\000\000\031\014\000\034\030\006param0\000\000\024\004,\034U\000\000\031\014\000\034\030\006param1\000\000\000,\034U\000\000\031\014\000\000<\030\022method_that_throwsl\026���˟����\001\025F\025\006\025F\025z\000\000)\034\024\002,\034�(\020��\031\033ّj\024���}b��\000\000\031\014\000\034\030\001e\000\000\034\034�(\020S\006*����\025crk\031\013k\013�\000\000\031\014\000\000<\030\022return_void_methodl\026���˟����\001\025H\025\006\025H\025L\000\000\034\031\034\024\002,\034U\000\000\031\014\000\034\030\002id\000\000\000,\034\000\031\014\000\000\000\000\020��\031\033ّj\024���}b��<\034\030\017CustomExceptionl\026���˟����\001\0258\025\002\025<\025\004\000\000\031\034\024\002,\034�\000\000\031\014\000\034\030\004namel\026���˟����\001\025:\025\006\025:\025$\000\000\000\000\000\000".getBytes();
}
