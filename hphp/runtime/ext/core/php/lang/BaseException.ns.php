<?hh // partial
namespace __SystemLib {
// This doc comment block generated by idl/sysdoc.php
/**
 * ( excerpt from http://php.net/manual/en/class.exception.php )
 *
 * Exception is the base class for all Exceptions.
 *
 */
trait BaseException {
  require implements \Throwable;

  const type TFrame = shape(
    ?'file' => string,
    ?'line' => int,
    ?'class' => string,
    ?'type' => string,
    ?'function' => string,
    ...
  );

  /**
   * throwable_init() and createAndConstructThrowable() depend on the order
   * of properties below:
   */
  protected string $message = ''; // exception message
  private string $string = '';    // php5 has this, we don't use it
  protected int $code = 0;        // user defined exception code
  protected string $file = '';    // source filename of exception
  protected int $line = 0;        // source line of exception
  /**
   * Full stack trace that this exception represents. Historically this could
   * be a resource, but now is always a `vec<this::TFrame>`.
   */
  private vec<this::TFrame> $trace = vec[];
  private ?\Throwable $previous = null;

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.getmessage.php )
   *
   * Returns the Exception message.
   *
   * @return     string   Returns the Exception message as a string.
   */
  public function getMessage(): string {
    return $this->message;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.getprevious.php )
   *
   * Returns previous Exception (the third parameter of
   * Exception::__construct()).
   *
   * @return     Throwable Returns the previous Exception if available or NULL
   *                       otherwise.
   */
  final public function getPrevious()[]: ?\Throwable {
    return $this->previous;
  }

  final public function setPrevious(\Throwable $previous)[write_props]: void {
    $this->previous = $previous;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.getcode.php )
   *
   * Returns the Exception code.
   *
   * @return     int     Returns the exception code as integer in Exception
   *                     but possibly as other type in Exception descendants
   *                     (for example as string in PDOException).
   */
  public function getCode()[]: int {
    return $this->code;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.getfile.php )
   *
   * Get the name of the file the exception was created.
   *
   * @return     string   Returns the filename in which the exception was
   *                      created.
   */
  final public function getFile()[]: string {
    return $this->file;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.getline.php )
   *
   * Get line number where the exception was created.
   *
   * @return     int   Returns the line number where the exception was
   *                   created.
   */
  final public function getLine()[]: int {
    return $this->line;
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.gettrace.php )
   *
   * Returns the Exception stack trace.
   *
   * @return vec<this::TFrame> Returns the Exception stack trace as an array.
   */
  final public function getTrace()[]: vec<this::TFrame> {
    return $this->trace;
  }

  /**
   * Modifies the exception's trace by prepending the provided trace.
   * Does not modify file, line, etc.
   */
  final protected function __prependTrace(
    \HH\Container<this::TFrame> $trace,
  )[write_props]: void {
    $this->trace = vec(
      HH\FIXME\UNSAFE_CAST<mixed, dict<arraykey, this::TFrame>>(
        \array_merge(\array_values($trace), $this->trace)
      )
    );
  }

  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.gettraceasstring.php )
   *
   * Returns the Exception stack trace as a string.
   *
   * @return     string   Returns the Exception stack trace as a string.
   */
  final public function getTraceAsString()[]: string {
    $i = 0;
    $s = "";
    foreach ($this->trace as $frame) {
      if (!\HH\is_any_array($frame)) continue;
      $s .= "#$i " .
        ($frame['file'] ?? "") . "(" .
        ($frame['line'] ?? "") . "): " .
        (isset($frame['class'])
          ? HH\FIXME\UNSAFE_CAST<mixed, string>($frame['class']) .
            ($frame['type'] ?? "")
          : ""
        ) .
        ($frame['function'] ?? "<unknown>") . "()\n";
      $i++;
    }
    $s .= "#$i {main}";
    return $s;
  }

  public function __toString(): string {
    return $this->toString();
  }

  /* Overridable */
  // formated string for display
  // This doc comment block generated by idl/sysdoc.php
  /**
   * ( excerpt from http://php.net/manual/en/exception.tostring.php )
   *
   * Returns the string representation of the exception.
   *
   * @return     mixed   Returns the string representation of the exception.
   */
  public function toString(): string {
    return self::toStringFromGetMessage(
      $this,
      (\Throwable $e) ==> $e->getMessage(),
    );
  }

  private static function getClassOfThrowable(\Throwable $ex)[]: string {
    $cls = HH\FIXME\UNSAFE_CAST<mixed, string>(\get_class($ex));
    if (\substr($cls, 0, \strlen("__SystemLib\\")) === "__SystemLib\\") {
      $cls = HH\FIXME\UNSAFE_CAST<mixed, string>(
        \substr($cls, \strlen("__SystemLib\\"))
      );
    }
    return $cls;
  }

  final protected static function toStringFromGetMessage(
    \Throwable $throwable,
    (function(\Throwable)[_]:string) $get_message,
  )[ctx $get_message]: string {
    $res = "";
    $lst = darray[];
    $ex = $throwable;
    while ($ex != null && !\array_key_exists(\spl_object_hash(HH\FIXME\UNSAFE_CAST<mixed,dynamic>($ex)), $lst)) {
      $lst[\spl_object_hash(HH\FIXME\UNSAFE_CAST<mixed,dynamic>($ex))] = $ex;
      $ex = $ex->getPrevious();
    }
    $lst = HH\FIXME\UNSAFE_CAST<
      ?dict<arraykey, mixed>,
      dict<arraykey, \Throwable>
    >(\array_reverse($lst));
    $first = true;
    foreach ($lst as $ex) {
      if (!$first) {
        $res .= "\n\nNext ";
      }
      $cls = self::getClassOfThrowable($ex);
      try {
        $message = $get_message($ex);
      } catch (\Throwable $msg_ex) {
        $msg_ex_cls = self::getClassOfThrowable($msg_ex);
        $message = $msg_ex_cls . " thrown while getting the message";
      }

      $res .= $ex is \Error
        ? $cls . ": " . $message
        : "exception '" . $cls . "' with message '" . $message .  "'";
      $res .=  " in " . $ex->getFile() . ":" .
        $ex->getLine() . "\nStack trace:\n" . $ex->getTraceAsString();
      $first = false;
    }
    return $res;
  }

  private function __clone(): void {
    \trigger_error(
      "Trying to clone an uncloneable object of class " . static::class,
      \E_USER_ERROR,
    );
  }
}
}
