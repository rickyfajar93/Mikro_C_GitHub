#line 1 "D:/project mikro C/Loader/Scrolling.c"
#line 1 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
#pragma pack(push,_CRT_PACKING)
#line 59 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
struct _iobuf {
 char *_ptr;
 int _cnt;
 char *_base;
 int _flag;
 int _file;
 int _charbuf;
 int _bufsiz;
 char *_tmpfname;
 };
typedef struct _iobuf FILE;
#line 131 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP FILE * __cdecl __iob_func(void);
#line 150 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
typedef long long fpos_t;
#line 188 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn int __cdecl _filbuf(__inout FILE * _File );
_CRTIMP __checkReturn_opt int __cdecl _flsbuf(__in int _Ch, __inout FILE * _File);




_CRTIMP __checkReturn FILE * __cdecl _fsopen(__in_z const char * _Filename, __in_z const char * _Mode, __in int _ShFlag);


_CRTIMP void __cdecl clearerr(__inout FILE * _File);
_CRTIMP __checkReturn_wat errno_t __cdecl clearerr_s(__inout FILE * _File );
_CRTIMP __checkReturn_opt int __cdecl fclose(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fcloseall(void);




_CRTIMP __checkReturn FILE * __cdecl _fdopen(__in int _FileHandle, __in_z const char * _Mode);


_CRTIMP __checkReturn int __cdecl feof(__in FILE * _File);
_CRTIMP __checkReturn int __cdecl ferror(__in FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fflush(__inout_opt FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fgetc(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fgetchar(void);
_CRTIMP __checkReturn_opt int __cdecl fgetpos(__inout FILE * _File , __out fpos_t * _Pos);
_CRTIMP __checkReturn_opt char * __cdecl fgets(__out_ecount_z(_MaxCount) char * _Buf, __in int _MaxCount, __inout FILE * _File);




_CRTIMP __checkReturn int __cdecl _fileno(__in FILE * _File);
#line 227 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn char * __cdecl _tempnam(__in_z_opt const char * _DirName, __in_z_opt const char * _FilePrefix);
#line 233 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl _flushall(void);
_CRT_INSECURE_DEPRECATE(fopen_s) _CRTIMP __checkReturn FILE * __cdecl fopen(__in_z const char * _Filename, __in_z const char * _Mode);
#line 238 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl fprintf(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fprintf_s(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fputc(__in int _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fputchar(__in int _Ch);
_CRTIMP __checkReturn_opt int __cdecl fputs(__in_z const char * _Str, __inout FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl fread(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl fread_s(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _DstSize, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRT_INSECURE_DEPRECATE(freopen_s) _CRTIMP __checkReturn FILE * __cdecl freopen(__in_z const char * _Filename, __in_z const char * _Mode, __inout FILE * _File);
#line 249 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRT_INSECURE_DEPRECATE(fscanf_s) _CRTIMP __checkReturn_opt int __cdecl fscanf(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRT_INSECURE_DEPRECATE(_fscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _fscanf_l(__inout FILE * _File, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
#line 254 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl _fscanf_s_l(__inout FILE * _File, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl fsetpos(__inout FILE * _File, __in const fpos_t * _Pos);
_CRTIMP __checkReturn_opt int __cdecl fseek(__inout FILE * _File, __in long _Offset, __in int _Origin);
_CRTIMP __checkReturn long __cdecl ftell(__inout FILE * _File);

_CRTIMP __checkReturn_opt int __cdecl _fseeki64(__inout FILE * _File, __in __int64 _Offset, __in int _Origin);
_CRTIMP __checkReturn __int64 __cdecl _ftelli64(__inout FILE * _File);

_CRTIMP __checkReturn_opt size_t __cdecl fwrite(__in_ecount(_Size*_Count) const void * _Str, __in size_t _Size, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn int __cdecl getc(__inout FILE * _File);
_CRTIMP __checkReturn int __cdecl getchar(void);
_CRTIMP __checkReturn int __cdecl _getmaxstdio(void);
#line 269 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(char *, gets_s, __out_ecount(_Size) char, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_SAME, _CRTIMP, gets, __out_z char, _Buffer)
__checkReturn int __cdecl _getw(__inout FILE * _File);


_CRTIMP void __cdecl perror(__in_z_opt const char * _ErrMsg);

_CRTIMP __checkReturn_opt int __cdecl _pclose(__inout FILE * _File);
_CRTIMP __checkReturn FILE * __cdecl _popen(__in_z const char * _Command, __in_z const char * _Mode);
_CRTIMP __checkReturn_opt int __cdecl printf(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl printf_s(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl putc(__in int _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl putchar(__in int _Ch);
_CRTIMP __checkReturn_opt int __cdecl puts(__in_z const char * _Str);
_CRTIMP __checkReturn_opt int __cdecl _putw(__in int _Word, __inout FILE * _File);


_CRTIMP __checkReturn int __cdecl remove(__in_z const char * _Filename);
_CRTIMP __checkReturn int __cdecl rename(__in_z const char * _OldFilename, __in_z const char * _NewFilename);
_CRTIMP __checkReturn int __cdecl _unlink(__in_z const char * _Filename);
#line 293 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP void __cdecl rewind(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _rmtmp(void);
_CRT_INSECURE_DEPRECATE(scanf_s) _CRTIMP __checkReturn_opt int __cdecl scanf(__in_z __format_string const char * _Format, ...);
_CRT_INSECURE_DEPRECATE(_scanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _scanf_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
#line 300 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _scanf_s_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(setvbuf) _CRTIMP void __cdecl setbuf(__inout FILE * _File, __inout_ecount_part_opt( 512 , 0) char * _Buffer);
_CRTIMP __checkReturn_opt int __cdecl _setmaxstdio(__in int _Max);
_CRTIMP __checkReturn_opt unsigned int __cdecl _set_output_format(__in unsigned int _Format);
_CRTIMP __checkReturn_opt unsigned int __cdecl _get_output_format(void);
_CRTIMP __checkReturn_opt int __cdecl setvbuf(__inout FILE * _File, __inout_bcount_z_opt(_Size) char * _Buf, __in int _Mode, __in size_t _Size);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snprintf_s(__out_bcount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int, _snprintf_s, _vsnprintf_s, __out_bcount(_Size) char, _Dest, __in size_t, _Size, __in_z __format_string const char *,_Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl sprintf_s(__out_bcount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in_z __format_string const char * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int, sprintf_s, vsprintf_s, __out_bcount(_Size) char, _Dest, __in_z __format_string const char *, _Format)
_CRTIMP __checkReturn int __cdecl _scprintf(__in_z __format_string const char * _Format, ...);
_CRT_INSECURE_DEPRECATE(sscanf_s) _CRTIMP __checkReturn_opt int __cdecl sscanf(__in_z const char * _Src, __in_z __format_string const char * _Format, ...);
_CRT_INSECURE_DEPRECATE(_sscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _sscanf_l(__in_z const char * _Src, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
#line 316 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _sscanf_s_l(__in_z const char * _Src, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(_snscanf_s) _CRTIMP __checkReturn_opt int __cdecl _snscanf(__in_bcount_z(_MaxCount) const char * _Src, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
_CRT_INSECURE_DEPRECATE(_snscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _snscanf_l(__in_bcount_z(_MaxCount) const char * _Src, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snscanf_s(__in_bcount_z(_MaxCount) const char * _Src, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snscanf_s_l(__in_bcount_z(_MaxCount) const char * _Src, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(tmpfile_s) _CRTIMP __checkReturn FILE * __cdecl tmpfile(void);
#line 326 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, tmpnam_s, __out_ecount_z(_Size) char, _Buf)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, tmpnam, __out_z_opt char, _Buffer)
_CRTIMP __checkReturn_opt int __cdecl ungetc(__in int _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl vfprintf(__inout FILE * _File, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vfprintf_s(__inout FILE * _File, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vprintf(__in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vprintf_s(__in_z __format_string const char * _Format, va_list _ArgList);
_CRT_INSECURE_DEPRECATE(vsnprintf_s) _CRTIMP __checkReturn_opt int __cdecl vsnprintf(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vsnprintf_s(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsnprintf_s(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int, _vsnprintf_s, __out_ecount(_Size) char, _Dest, __in size_t, _Size, __in_z __format_string const char *, _Format, va_list, _Args)
#pragma warning(push)
#pragma warning(disable:4793)
#line 339 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(int, __RETURN_POLICY_SAME, _CRTIMP, _snprintf, _vsnprintf, __out_z char, __out_ecount(_Count) char, _Dest, __in size_t, _Count, __in_z __format_string const char *, _Format)
#pragma warning(pop)
#line 341 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP_ALTERNATIVE int __cdecl vsprintf_s(__out_ecount_z(_Size) char * _DstBuf, __in size_t _Size, __in_z __format_string const char * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vsprintf_s, __out_ecount(_Size) char, _Dest, __in_z __format_string const char *, _Format, va_list, _Args)
#pragma warning(push)
#pragma warning(disable:4793)
#line 345 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(int, __RETURN_POLICY_SAME, _CRTIMP, sprintf, vsprintf, __out_z char, _Dest, __in_z __format_string const char *, _Format)
#pragma warning(pop)
#line 347 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn int __cdecl _vscprintf(__in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _snprintf_c(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _vsnprintf_c(__out_ecount(_MaxCount) char *_DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _fprintf_p(__inout FILE * _File, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _printf_p(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _sprintf_p(__out_ecount_z(_MaxCount) char * _Dst, __in size_t _MaxCount, __in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _vfprintf_p(__inout FILE * _File, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vprintf_p(__in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vsprintf_p(__out_ecount_z(_MaxCount) char * _Dst, __in size_t _MaxCount, __in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP __checkReturn int __cdecl _scprintf_p(__in_z __format_string const char * _Format, ...);
_CRTIMP __checkReturn int __cdecl _vscprintf_p(__in_z __format_string const char * _Format, va_list _ArgList);
_CRTIMP int __cdecl _set_printf_count_output(__in int _Value);
_CRTIMP int __cdecl _get_printf_count_output();

_CRTIMP __checkReturn_opt int __cdecl _printf_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _printf_p_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _printf_s_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vprintf_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vprintf_p_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vprintf_s_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _fprintf_l(__inout FILE * _File, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _fprintf_p_l(__inout FILE * _File, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _fprintf_s_l(__inout FILE * _File, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vfprintf_l(__inout FILE * _File, __in_z const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vfprintf_p_l(__inout FILE * _File, __in_z const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vfprintf_s_l(__inout FILE * _File, __in_z const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRT_INSECURE_DEPRECATE(_sprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _sprintf_l(__out_z char * _DstBuf, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _sprintf_p_l(__out_ecount_z(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _sprintf_s_l(__out_bcount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(_vsprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _vsprintf_l(__out_z char * _DstBuf, __in_z const char * _Format, __in_opt _locale_t, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vsprintf_p_l(__out_ecount_z(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char* _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsprintf_s_l(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _scprintf_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _scprintf_p_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vscprintf_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vscprintf_p_l(__in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRT_INSECURE_DEPRECATE(_snprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _snprintf_l(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _snprintf_c_l(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snprintf_s_l(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(_vsnprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _vsnprintf_l(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, __in_z __format_string const char * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vsnprintf_c_l(__out_ecount(_MaxCount) char * _DstBuf, __in size_t _MaxCount, const char *, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vsnprintf_s_l(__out_ecount_z(_DstSize) char * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const char* _Format,__in_opt _locale_t _Locale, va_list _ArgList);
#line 406 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn FILE * __cdecl _wfsopen(__in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode, __in int _ShFlag);


_CRTIMP __checkReturn_opt wint_t __cdecl fgetwc(__inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl _fgetwchar(void);
_CRTIMP __checkReturn_opt wint_t __cdecl fputwc(__in wchar_t _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl _fputwchar(__in wchar_t _Ch);
_CRTIMP __checkReturn wint_t __cdecl getwc(__inout FILE * _File);
_CRTIMP __checkReturn wint_t __cdecl getwchar(void);
_CRTIMP __checkReturn_opt wint_t __cdecl putwc(__in wchar_t _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl putwchar(__in wchar_t _Ch);
_CRTIMP __checkReturn_opt wint_t __cdecl ungetwc(__in wint_t _Ch, __inout FILE * _File);

_CRTIMP __checkReturn_opt wchar_t * __cdecl fgetws(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in int _SizeInWords, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl fputws(__in_z const wchar_t * _Str, __inout FILE * _File);
_CRTIMP __checkReturn_opt wchar_t * __cdecl _getws_s(__out_ecount_z(_SizeInWords) wchar_t * _Str, __in size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(wchar_t *, _getws_s, __out_ecount(_Size) wchar_t, _String)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_SAME, _CRTIMP, _getws, __out_z wchar_t, _String)
_CRTIMP __checkReturn_opt int __cdecl _putws(__in_z const wchar_t * _Str);

_CRTIMP __checkReturn_opt int __cdecl fwprintf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl fwprintf_s(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl wprintf(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl wprintf_s(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn int __cdecl _scwprintf(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl vfwprintf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vfwprintf_s(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vwprintf(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl vwprintf_s(__in_z __format_string const wchar_t * _Format, va_list _ArgList);

_CRTIMP_ALTERNATIVE int __cdecl swprintf_s(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int, swprintf_s, vswprintf_s, __out_ecount(_Size) wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format)
_CRTIMP_ALTERNATIVE int __cdecl vswprintf_s(__out_ecount_z(_SizeInWords) wchar_t * _Dst, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vswprintf_s, __out_ecount(_Size) wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format, va_list, _Args)

_CRTIMP __checkReturn_opt int __cdecl _swprintf_c(__out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _vswprintf_c(__out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords, __in_z __format_string const wchar_t * _Format, va_list _ArgList);

_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snwprintf_s(__out_ecount_z(_DstSizeInWords) wchar_t * _DstBuf, __in size_t _DstSizeInWords, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, ...);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int, _snwprintf_s, _vsnwprintf_s, __out_ecount(_Size) wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format)
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsnwprintf_s(__out_ecount_z(_DstSizeInWords) wchar_t * _DstBuf, __in size_t _DstSizeInWords, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int, _vsnwprintf_s, __out_ecount(_Size) wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format, va_list, _Args)
#pragma warning(push)
#pragma warning(disable:4793)
#line 450 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(int, __RETURN_POLICY_SAME, _CRTIMP, _snwprintf, _vsnwprintf, __out_z wchar_t, __out_ecount(_Count) wchar_t, _Dest, __in size_t, _Count, __in_z __format_string const wchar_t *, _Format)
#pragma warning(pop)
#line 453 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl _fwprintf_p(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _wprintf_p(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _vfwprintf_p(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vwprintf_p(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _swprintf_p(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn_opt int __cdecl _vswprintf_p(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn int __cdecl _scwprintf_p(__in_z __format_string const wchar_t * _Format, ...);
_CRTIMP __checkReturn int __cdecl _vscwprintf_p(__in_z __format_string const wchar_t * _Format, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _wprintf_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _wprintf_p_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _wprintf_s_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vwprintf_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vwprintf_p_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vwprintf_s_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _fwprintf_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _fwprintf_p_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _fwprintf_s_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vfwprintf_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vfwprintf_p_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vfwprintf_s_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRTIMP __checkReturn_opt int __cdecl _swprintf_c_l(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _swprintf_p_l(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _swprintf_s_l(__out_ecount_z(_DstSize) wchar_t * _DstBuf, __in size_t _DstSize, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn_opt int __cdecl _vswprintf_c_l(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP __checkReturn_opt int __cdecl _vswprintf_p_l(__out_ecount_z(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vswprintf_s_l(__out_ecount_z(_DstSize) wchar_t * _DstBuf, __in size_t _DstSize, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRTIMP __checkReturn int __cdecl _scwprintf_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn int __cdecl _scwprintf_p_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP __checkReturn int __cdecl _vscwprintf_p_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);

_CRT_INSECURE_DEPRECATE(_snwprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _snwprintf_l(__out_ecount(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snwprintf_s_l(__out_ecount_z(_DstSize) wchar_t * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(_vsnwprintf_s_l) _CRTIMP __checkReturn_opt int __cdecl _vsnwprintf_l(__out_ecount(_MaxCount) wchar_t * _DstBuf, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _vsnwprintf_s_l(__out_ecount_z(_DstSize) wchar_t * _DstBuf, __in size_t _DstSize, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
#pragma warning(push)
#pragma warning(disable:4141 4996 4793)
#line 506 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(int, __RETURN_POLICY_SAME,  _CRT_DEPRECATE_TEXT("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")  _CRTIMP, _swprintf, _swprintf_s, _vswprintf, vswprintf_s, __out_z wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(int, __RETURN_POLICY_SAME,  _CRT_DEPRECATE_TEXT("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")  _CRTIMP, __swprintf_l, __vswprintf_l, _vswprintf_s_l, __out_z wchar_t, __out wchar_t, _Dest, __in_z __format_string const wchar_t *, _Format, _locale_t, _Plocinfo)
#pragma warning(pop)
#line 528 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn wchar_t * __cdecl _wtempnam(__in_z_opt const wchar_t * _Directory, __in_z_opt const wchar_t * _FilePrefix);
#line 534 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn int __cdecl _vscwprintf(__in_z __format_string const wchar_t * _Format, va_list _ArgList);
_CRTIMP __checkReturn int __cdecl _vscwprintf_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, va_list _ArgList);
_CRT_INSECURE_DEPRECATE(fwscanf_s) _CRTIMP __checkReturn_opt int __cdecl fwscanf(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, ...);
_CRT_INSECURE_DEPRECATE(_fwscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _fwscanf_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
#line 541 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl _fwscanf_s_l(__inout FILE * _File, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(swscanf_s) _CRTIMP __checkReturn_opt int __cdecl swscanf(__in_z const wchar_t * _Src, __in_z __format_string const wchar_t * _Format, ...);
_CRT_INSECURE_DEPRECATE(_swscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _swscanf_l(__in_z const wchar_t * _Src, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
#line 547 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _swscanf_s_l(__in_z const wchar_t * _Src, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(_snwscanf_s) _CRTIMP __checkReturn_opt int __cdecl _snwscanf(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, ...);
_CRT_INSECURE_DEPRECATE(_snwscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _snwscanf_l(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snwscanf_s(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, ...);
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _snwscanf_s_l(__in_ecount_z(_MaxCount) const wchar_t * _Src, __in size_t _MaxCount, __in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
_CRT_INSECURE_DEPRECATE(wscanf_s) _CRTIMP __checkReturn_opt int __cdecl wscanf(__in_z __format_string const wchar_t * _Format, ...);
_CRT_INSECURE_DEPRECATE(_wscanf_s_l) _CRTIMP __checkReturn_opt int __cdecl _wscanf_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);
#line 557 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP_ALTERNATIVE __checkReturn_opt int __cdecl _wscanf_s_l(__in_z __format_string const wchar_t * _Format, __in_opt _locale_t _Locale, ...);

_CRTIMP __checkReturn FILE * __cdecl _wfdopen(__in int _FileHandle , __in_z const wchar_t * _Mode);
_CRT_INSECURE_DEPRECATE(_wfopen_s) _CRTIMP __checkReturn FILE * __cdecl _wfopen(__in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode);
_CRTIMP __checkReturn_wat errno_t __cdecl _wfopen_s(__deref_out_opt FILE ** _File, __in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode);
_CRT_INSECURE_DEPRECATE(_wfreopen_s) _CRTIMP __checkReturn FILE * __cdecl _wfreopen(__in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode, __inout FILE * _OldFile);
_CRTIMP __checkReturn_wat errno_t __cdecl _wfreopen_s(__deref_out_opt FILE ** _File, __in_z const wchar_t * _Filename, __in_z const wchar_t * _Mode, __inout FILE * _OldFile);



_CRTIMP void __cdecl _wperror(__in_z_opt const wchar_t * _ErrMsg);

_CRTIMP __checkReturn FILE * __cdecl _wpopen(__in_z const wchar_t *_Command, __in_z const wchar_t * _Mode);
_CRTIMP __checkReturn int __cdecl _wremove(__in_z const wchar_t * _Filename);
_CRTIMP __checkReturn_wat errno_t __cdecl _wtmpnam_s(__out_ecount_z(_SizeInWords) wchar_t * _DstBuf, __in size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wtmpnam_s, __out_ecount_z(_Size) wchar_t, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wtmpnam, __out_z_opt wchar_t, _Buffer)

_CRTIMP __checkReturn_opt wint_t __cdecl _fgetwc_nolock(__inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl _fputwc_nolock(__in wchar_t _Ch, __inout FILE * _File);
_CRTIMP __checkReturn_opt wint_t __cdecl _ungetwc_nolock(__in wint_t _Ch, __inout FILE * _File);
#line 643 "d:/mikroelektronika/mikroc pro for pic/include/stdio.h"
_CRTIMP __checkReturn_opt int __cdecl _fclose_nolock(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fflush_nolock(__inout_opt FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl _fread_nolock(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl _fread_nolock_s(__out_bcount(_ElementSize*_Count) void * _DstBuf, __in size_t _DstSize, __in size_t _ElementSize, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fseek_nolock(__inout FILE * _File, __in long _Offset, __in int _Origin);
_CRTIMP __checkReturn long __cdecl _ftell_nolock(__inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _fseeki64_nolock(__inout FILE * _File, __in __int64 _Offset, __in int _Origin);
_CRTIMP __checkReturn __int64 __cdecl _ftelli64_nolock(__inout FILE * _File);
_CRTIMP __checkReturn_opt size_t __cdecl _fwrite_nolock(__in_bcount(_Size*_Count) const void * _DstBuf, __in size_t _Size, __in size_t _Count, __inout FILE * _File);
_CRTIMP __checkReturn_opt int __cdecl _ungetc_nolock(__in int _Ch, __inout FILE * _File);
#pragma pack(pop)
#line 5 "D:/project mikro C/Loader/Scrolling.c"
char getLoopChar(const char *text, int offset)
{
 return text[offset % strlen(text)];
}

int main(int argc, char *argv[])
{
 const char *text = "This is a scrolling message...";
 int window_start = 0;

 while(1)
 {
 int i;
 for (i=0;i<16;i++)
 putchar(getLoopChar(text, window_start+i));
 putchar('\n');
 window_start++;
 }

 return 0;
}
