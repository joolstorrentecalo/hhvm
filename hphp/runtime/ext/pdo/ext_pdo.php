<?hh // partial
// generated by idl-to-hni.php

/* Represents a connection between PHP and a database server.
 */
<<__NativeData>>
class PDO {

  /* @param string $dsn
   * @param string $username
   * @param string $password
   * @param array $options
   */
  <<__Native>>
  public function __construct(string $dsn,
                       string $username = "",
                       string $password = "",
                       ?darray<string, mixed> $options = NULL): void;

  /* Prepares an SQL statement to be executed by the PDOStatement::execute()
   * method. The SQL statement can contain zero or more named (:name) or
   * question mark (?) parameter markers for which real values will be
   * substituted when the statement is executed. You cannot use both named and
   * question mark parameter markers within the same SQL statement; pick one or
   * the other parameter style. Use these parameters to bind any user-input, do
   * not include the user-input directly in the query.  You must include a
   * unique parameter marker for each value you wish to pass in to the statement
   * when you call PDOStatement::execute(). You cannot use a named parameter
   * marker of the same name twice in a prepared statement. You cannot bind
   * multiple values to a single named parameter in, for example, the IN()
   * clause of an SQL statement.  Calling PDO::prepare() and
   * PDOStatement::execute() for statements that will be issued multiple times
   * with different parameter values optimizes the performance of your
   * application by allowing the driver to negotiate client and/or server side
   * caching of the query plan and meta information, and helps to prevent SQL
   * injection attacks by eliminating the need to manually quote the parameters.
   *  PDO will emulate prepared statements/bound parameters for drivers that do
   * not natively support them, and can also rewrite named or question mark
   * style parameter markers to something more appropriate, if the driver
   * supports one style but not the other.
   * @param string $statement - This must be a valid SQL statement for the
   * target database server.
   * @param array $options - This array holds one or more key=>value pairs to
   * set attribute values for the PDOStatement object that this method returns.
   * You would most commonly use this to set the PDO::ATTR_CURSOR value to
   * PDO::CURSOR_SCROLL to request a scrollable cursor. Some drivers have driver
   * specific options that may be set at prepare-time.
   * @return mixed - If the database server successfully prepares the statement,
   * PDO::prepare() returns a PDOStatement object. If the database server cannot
   * successfully prepare the statement, PDO::prepare() returns FALSE or emits
   * PDOException (depending on error handling).  Emulated prepared statements
   * does not communicate with the database server so PDO::prepare() does not
   * check the statement.
   */
  <<__Native>>
  public function prepare(string $statement,
                   darray<arraykey, mixed> $options = darray[]): mixed;

  /* Turns off autocommit mode. While autocommit mode is turned off, changes
   * made to the database via the PDO object instance are not committed until
   * you end the transaction by calling PDO::commit(). Calling PDO::rollBack()
   * will roll back all changes to the database and return the connection to
   * autocommit mode.  Some databases, including MySQL, automatically issue an
   * implicit COMMIT when a database definition language (DDL) statement such as
   * DROP TABLE or CREATE TABLE is issued within a transaction. The implicit
   * COMMIT will prevent you from rolling back any other changes within the
   * transaction boundary.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function beginTransaction(): bool;

  /* Commits a transaction, returning the database connection to autocommit mode
   * until the next call to PDO::beginTransaction() starts a new transaction.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function commit(): bool;

  /* Checks if a transaction is currently active within the driver. This method
   * only works for database drivers that support transactions.
   * @return bool - Returns TRUE if a transaction is currently active, and FALSE
   * if not.
   */
  <<__Native>>
  public function inTransaction(): bool;

  /* Rolls back the current transaction, as initiated by
   * PDO::beginTransaction(). It is an error to call this method if no
   * transaction is active.  If the database was set to autocommit mode, this
   * function will restore autocommit mode after it has rolled back the
   * transaction.  Some databases, including MySQL, automatically issue an
   * implicit COMMIT when a database definition language (DDL) statement such as
   * DROP TABLE or CREATE TABLE is issued within a transaction. The implicit
   * COMMIT will prevent you from rolling back any other changes within the
   * transaction boundary.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function rollBack(): bool;

  /* Sets an attribute on the database handle. Some of the available generic
   * attributes are listed below; some drivers may make use of additional driver
   * specific attributes.  PDO::ATTR_CASE: Force column names to a specific
   * case.  PDO::CASE_LOWER: Force column names to lower case.
   * PDO::CASE_NATURAL: Leave column names as returned by the database driver.
   * PDO::CASE_UPPER: Force column names to upper case. PDO::ATTR_ERRMODE: Error
   * reporting. PDO::ERRMODE_SILENT: Just set error codes. PDO::ERRMODE_WARNING:
   * Raise E_WARNING. PDO::ERRMODE_EXCEPTION: Throw exceptions.
   * PDO::ATTR_ORACLE_NULLS (available with all drivers, not just Oracle):
   * Conversion of NULL and empty strings. PDO::NULL_NATURAL: No conversion.
   * PDO::NULL_EMPTY_STRING: Empty string is converted to NULL.
   * PDO::NULL_TO_STRING: NULL is converted to an empty string.
   * PDO::ATTR_STRINGIFY_FETCHES: Convert numeric values to strings when
   * fetching. Requires bool. PDO::ATTR_STATEMENT_CLASS: Set user-supplied
   * statement class derived from PDOStatement. Cannot be used with persistent
   * PDO instances. Requires array(string classname, array(mixed
   * constructor_args)). PDO::ATTR_TIMEOUT: Specifies the timeout duration in
   * seconds. Not all drivers support this option, and it's meaning may differ
   * from driver to driver. For example, sqlite will wait for up to this time
   * value before giving up on obtaining an writable lock, but other drivers may
   * interpret this as a connect or a read timeout interval. Requires int.
   * PDO::ATTR_AUTOCOMMIT (available in OCI, Firebird and MySQL): Whether to
   * autocommit every single statement. PDO::MYSQL_ATTR_USE_BUFFERED_QUERY
   * (available in MySQL): Use buffered queries.
   * @param int $attribute
   * @param mixed $value
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function setAttribute(int $attribute,
                        mixed $value): bool;

  /* This function returns the value of a database connection attribute. To
   * retrieve PDOStatement attributes, refer to PDOStatement::getAttribute().
   * Note that some database/driver combinations may not support all of the
   * database connection attributes.
   * @param int $attribute - One of the PDO::ATTR_* constants. The constants
   * that apply to database connections are as follows: PDO::ATTR_AUTOCOMMIT
   * PDO::ATTR_CASE PDO::ATTR_CLIENT_VERSION PDO::ATTR_CONNECTION_STATUS
   * PDO::ATTR_DRIVER_NAME PDO::ATTR_ERRMODE PDO::ATTR_ORACLE_NULLS
   * PDO::ATTR_PERSISTENT PDO::ATTR_PREFETCH PDO::ATTR_SERVER_INFO
   * PDO::ATTR_SERVER_VERSION PDO::ATTR_TIMEOUT
   * @return mixed - A successful call returns the value of the requested PDO
   * attribute. An unsuccessful call returns null.
   */
  <<__Native>>
  public function getAttribute(int $attribute): mixed;

  /* PDO::exec() executes an SQL statement in a single function call, returning
   * the number of rows affected by the statement.  PDO::exec() does not return
   * results from a SELECT statement. For a SELECT statement that you only need
   * to issue once during your program, consider issuing PDO::query(). For a
   * statement that you need to issue multiple times, prepare a PDOStatement
   * object with PDO::prepare() and issue the statement with
   * PDOStatement::execute().
   * @param string $query - The SQL statement to prepare and execute.  Data
   * inside the query should be properly escaped.
   * @return mixed - PDO::exec() returns the number of rows that were modified
   * or deleted by the SQL statement you issued. If no rows were affected,
   * PDO::exec() returns 0. WarningThis function may return Boolean FALSE, but
   * may also return a non-Boolean value which evaluates to FALSE, such as 0 or
   * "". Please read the section on Booleans for more information. Use the ===
   * operator for testing the return value of this function.  The following
   * example incorrectly relies on the return value of PDO::exec(), wherein a
   * statement that affected 0 rows results in a call to die():
   */
  <<__Native>>
  public function exec(string $query): mixed;

  /* Returns the ID of the last inserted row, or the last value from a sequence
   * object, depending on the underlying driver.
   * This method may not return a meaningful or consistent result
   * across different PDO drivers, because the underlying database may not even
   * support the notion of auto-increment fields or sequences.
   * @param string $seqname - Name of the sequence object from which the ID
   * should be returned.
   * @return mixed - If a sequence name was not specified for the name
   * parameter, PDO::lastInsertId() returns a string representing the row ID of
   * the last row that was inserted into the database.  If a sequence name was
   * specified for the name parameter, PDO::lastInsertId() returns a string
   * representing the last value retrieved from the specified sequence object.
   * If the PDO driver does not support this capability, PDO::lastInsertId()
   * triggers an IM001 SQLSTATE.
   */
  <<__Native>>
  public function lastInsertId(string $seqname = ""): mixed;

  /* @return mixed - Returns an SQLSTATE, a five characters alphanumeric
   * identifier defined in the ANSI SQL-92 standard. Briefly, an SQLSTATE
   * consists of a two characters class value followed by a three characters
   * subclass value. A class value of 01 indicates a warning and is accompanied
   * by a return code of SQL_SUCCESS_WITH_INFO. Class values other than '01',
   * except for the class 'IM', indicate an error. The class 'IM' is specific to
   * warnings and errors that derive from the implementation of PDO (or perhaps
   * ODBC, if you're using the ODBC driver) itself. The subclass value '000' in
   * any class indicates that there is no subclass for that SQLSTATE.
   * PDO::errorCode() only retrieves error codes for operations performed
   * directly on the database handle. If you create a PDOStatement object
   * through PDO::prepare() or PDO::query() and invoke an error on the statement
   * handle, PDO::errorCode() will not reflect that error. You must call
   * PDOStatement::errorCode() to return the error code for an operation
   * performed on a particular statement handle.  Returns NULL if no operation
   * has been run on the database handle.
   */
  <<__Native>>
  public function errorCode(): mixed;

  /* @return array - PDO::errorInfo() returns an array of error information
   * about the last operation performed by this database handle. The array
   * consists of the following fields: Element Information 0 SQLSTATE error code
   * (a five characters alphanumeric identifier defined in the ANSI SQL
   * standard). 1 Driver-specific error code. 2 Driver-specific error message.
   * If the SQLSTATE error code is not set or there is no driver-specific error,
   * the elements following element 0 will be set to NULL.  PDO::errorInfo()
   * only retrieves error information for operations performed directly on the
   * database handle. If you create a PDOStatement object through PDO::prepare()
   * or PDO::query() and invoke an error on the statement handle,
   * PDO::errorInfo() will not reflect the error from the statement handle. You
   * must call PDOStatement::errorInfo() to return the error information for an
   * operation performed on a particular statement handle.
   */
  <<__Native>>
  public function errorInfo(): varray<mixed>;

  /* PDO::query() executes an SQL statement in a single function call, returning
   * the result set (if any) returned by the statement as a PDOStatement object.
   *  For a query that you need to issue multiple times, you will realize better
   * performance if you prepare a PDOStatement object using PDO::prepare() and
   * issue the statement with multiple calls to PDOStatement::execute().  If you
   * do not fetch all of the data in a result set before issuing your next call
   * to PDO::query(), your call may fail. Call PDOStatement::closeCursor() to
   * release the database resources associated with the PDOStatement object
   * before issuing your next call to PDO::query().  Although this function is
   * only documented as having a single parameter, you may pass additional
   * arguments to this function. They will be treated as though you called
   * PDOStatement::setFetchMode() on the resultant statement object.
   * @param string $sql - The SQL statement to prepare and execute.  Data inside
   * the query should be properly escaped.
   * @return mixed - PDO::query() returns a PDOStatement object, or FALSE on
   * failure.
   */
  <<__Native>>
  public function query(string $sql,
                 ...$argv): mixed;

  /* PDO::quote() places quotes around the input string (if required) and
   * escapes special characters within the input string, using a quoting style
   * appropriate to the underlying driver.  If you are using this function to
   * build SQL statements, you are strongly recommended to use PDO::prepare() to
   * prepare SQL statements with bound parameters instead of using PDO::quote()
   * to interpolate user input into an SQL statement. Prepared statements with
   * bound parameters are not only more portable, more convenient, immune to SQL
   * injection, but are often much faster to execute than interpolated queries,
   * as both the server and client side can cache a compiled form of the query.
   * Not all PDO drivers implement this method (notably PDO_ODBC). Consider
   * using prepared statements instead.
   * @param string $str - The string to be quoted.
   * @param int $paramtype - Provides a data type hint for drivers that have
   * alternate quoting styles.
   * @return mixed - Returns a quoted string that is theoretically safe to pass
   * into an SQL statement. Returns FALSE if the driver does not support quoting
   * in this way.
   */
  <<__Native>>
  public function quote(string $str,
                 int $paramtype = PDO::PARAM_STR): mixed;

  /* Registers a User Defined Function for use in SQL statements.
   * @param string $name - Name of the SQL function to be created or redefined.
   * @param mixed $callback - The name of a PHP function or user-defined
   * function to apply as a callback, defining the behavior of the SQL function.
   * @param int $argcount - The number of arguments that the SQL function takes.
   * If this parameter is negative, then the SQL function may take any number of
   * arguments.
   * @return bool - Returns TRUE upon successful creation of the function, FALSE
   * on failure.
   */
  <<__Native>>
  public function sqliteCreateFunction(string $name,
                                mixed $callback,
                                int $argcount = -1): bool;

  /* Registers an aggregating User Defined Function for use in SQL statements
   * @param string $name - Name of the SQL aggregate to be created or redefined.
   * @param mixed $step - The name of a PHP function or user-defined function to
   * apply as a callback for every item in the aggregate.
   * @param mixed $final - The name of a PHP function or user-defined function
   * to apply as a callback at the end of the aggregate data.
   * @param int $argcount - The number of arguments that the SQL aggregate
   * takes. If this parameter is negative, then the SQL aggregate may take any
   * number of arguments.
   * @return bool - Returns TRUE upon successful creation of the aggregate,
   * FALSE on failure.
   */
  <<__Native>>
  public function sqliteCreateAggregate(string $name,
                                 mixed $step,
                                 mixed $final,
                                 int $argcount = -1): bool;

  /* @return mixed
   */
  <<__Native>>
  public function __wakeup()[]: mixed;

  /* @return mixed
   */
  <<__Native>>
  public function __sleep()[]: mixed;

  /* This function returns all currently available PDO drivers which can be used
   * in DSN parameter of PDO::__construct(). This is a static method.
   * @return array - PDO::getAvailableDrivers() returns an array of PDO driver
   * names. If no drivers are available, it returns an empty array.
   */
  <<__Native>>
  public static function getAvailableDrivers(): vec<string>;
}

/* Represents a prepared statement and, after the statement is executed, an
 * associated result set.
 */
<<__NativeData>>
class PDOStatement implements Iterator {

  public ?string $queryString = null;

  /* Execute the prepared statement. If the prepared statement included
   * parameter markers, you must either: PDOStatement::bindParam() to bind PHP
   * variables to the parameter markers: bound variables pass their value as
   * input and receive the output value, if any, of their associated parameter
   * markers
   * @param array $params - An array of values with as many elements as there
   * are bound parameters in the SQL statement being executed. All values are
   * treated as PDO::PARAM_STR.  You cannot bind multiple values to a single
   * parameter; for example, you cannot bind two values to a single named
   * parameter in an IN() clause.
   * @return mixed - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function execute(?AnyArray $params = NULL): mixed;

  /* Fetches a row from a result set associated with a PDOStatement object. The
   * fetch_style parameter determines how PDO returns the row.
   * @param int $how - Controls how the next row will be returned to the caller.
   * This value must be one of the PDO::FETCH_* constants, defaulting to
   * PDO::FETCH_BOTH.  PDO::FETCH_ASSOC: returns an array indexed by column name
   * as returned in your result set  PDO::FETCH_BOTH (default): returns an array
   * indexed by both column name and 0-indexed column number as returned in your
   * result set  PDO::FETCH_BOUND: returns TRUE and assigns the values of the
   * columns in your result set to the PHP variables to which they were bound
   * with the PDOStatement::bindColumn() method  PDO::FETCH_CLASS: returns a new
   * instance of the requested class, mapping the columns of the result set to
   * named properties in the class. If fetch_style includes PDO::FETCH_CLASSTYPE
   * (e.g. PDO::FETCH_CLASS | PDO::FETCH_CLASSTYPE) then the name of the class
   * is determined from a value of the first column.  PDO::FETCH_INTO: updates
   * an existing instance of the requested class, mapping the columns of the
   * result set to named properties in the class  PDO::FETCH_LAZY: combines
   * PDO::FETCH_BOTH and PDO::FETCH_OBJ, creating the object variable names as
   * they are accessed  PDO::FETCH_NUM: returns an array indexed by column
   * number as returned in your result set, starting at column 0
   * PDO::FETCH_OBJ: returns an anonymous object with property names that
   * correspond to the column names returned in your result set
   * @param int $orientation - For a PDOStatement object representing a
   * scrollable cursor, this value determines which row will be returned to the
   * caller. This value must be one of the PDO::FETCH_ORI_* constants,
   * defaulting to PDO::FETCH_ORI_NEXT. To request a scrollable cursor for your
   * PDOStatement object, you must set the PDO::ATTR_CURSOR attribute to
   * PDO::CURSOR_SCROLL when you prepare the SQL statement with PDO::prepare().
   * @param int $offset - For a PDOStatement object representing a scrollable
   * cursor for which the cursor_orientation parameter is set to
   * PDO::FETCH_ORI_ABS, this value specifies the absolute number of the row in
   * the result set that shall be fetched.  For a PDOStatement object
   * representing a scrollable cursor for which the cursor_orientation parameter
   * is set to PDO::FETCH_ORI_REL, this value specifies the row to fetch
   * relative to the cursor position before PDOStatement::fetch() was called.
   * @return mixed - The return value of this function on success depends on the
   * fetch type. In all cases, FALSE is returned on failure.
   */
  <<__Native>>
  public function fetch(int $how = 0,
                 int $orientation = PDO::FETCH_ORI_NEXT,
                 int $offset = 0): mixed;

  /* Fetches the next row and returns it as an object. This function is an
   * alternative to PDOStatement::fetch() with PDO::FETCH_CLASS or
   * PDO::FETCH_OBJ style.
   * @param string $class_name - Name of the created class.
   * @param mixed $ctor_args - Elements of this array are passed to the
   * constructor.
   * @return mixed - Returns an instance of the required class with property
   * names that correspond to the column names or FALSE on failure.
   */
  <<__Native>>
  public function fetchObject(string $class_name = "",
                       mixed $ctor_args = null): mixed;

  /* Returns a single column from the next row of a result set or FALSE if there
   * are no more rows.
   * @param int $column_numner - 0-indexed number of the column you wish to
   * retrieve from the row. If no value is supplied, PDOStatement::fetchColumn()
   * fetches the first column.
   * @return mixed - PDOStatement::fetchColumn() returns a single column in the
   * next row of a result set. Warning  There is no way to return another column
   * from the same row if you use PDOStatement::fetchColumn() to retrieve data.
   */
  <<__Native>>
  public function fetchColumn(int $column_numner = 0): mixed;

  /* @param int $how - Controls the contents of the returned array as documented
   * in PDOStatement::fetch().  To return an array consisting of all values of a
   * single column from the result set, specify PDO::FETCH_COLUMN. You can
   * specify which column you want with the column-index parameter.  To fetch
   * only the unique values of a single column from the result set, bitwise-OR
   * PDO::FETCH_COLUMN with PDO::FETCH_UNIQUE.  To return an associative array
   * grouped by the values of a specified column, bitwise-OR PDO::FETCH_COLUMN
   * with PDO::FETCH_GROUP.
   * @param mixed $class_name - Returns the indicated 0-indexed column when the
   * value of fetch_style is PDO::FETCH_COLUMN.
   * @param mixed $ctor_args - Arguments of custom class constructor.
   * @return mixed - PDOStatement::fetchAll() returns an array containing all of
   * the remaining rows in the result set. The array represents each row as
   * either an array of column values or an object with properties corresponding
   * to each column name.  Using this method to fetch large result sets will
   * result in a heavy demand on system and possibly network resources. Rather
   * than retrieving all of the data and manipulating it in PHP, consider using
   * the database server to manipulate the result sets. For example, use the
   * WHERE and SORT BY clauses in SQL to restrict results before retrieving and
   * processing them with PHP.
   */
  <<__Native>>
  public function fetchAll(int $how = 0,
                    mixed $class_name = null,
                    mixed $ctor_args = null): mixed;

  /* Binds a value to a corresponding named or question mark placeholder in the
   * SQL statement that was use to prepare the statement.
   * @param mixed $paramno - Parameter identifier. For a prepared statement
   * using named placeholders, this will be a parameter name of the form :name.
   * For a prepared statement using question mark placeholders, this will be the
   * 1-indexed position of the parameter.
   * @param mixed $param - The value to bind to the parameter.
   * @param int $type - Explicit data type for the parameter using the
   * PDO::PARAM_* constants.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function bindValue(mixed $paramno,
                     mixed $param,
                     int $type = PDO::PARAM_STR): bool;

  /* PDOStatement::rowCount() returns the number of rows affected by the last
   * DELETE, INSERT, or UPDATE statement executed by the corresponding
   * PDOStatement object.  If the last SQL statement executed by the associated
   * PDOStatement was a SELECT statement, some databases may return the number
   * of rows returned by that statement. However, this behaviour is not
   * guaranteed for all databases and should not be relied on for portable
   * applications.
   * @return int - Returns the number of rows.
   */
  <<__Native>>
  public function rowCount(): int;

  /* @return mixed - Identical to PDO::errorCode(), except that
   * PDOStatement::errorCode() only retrieves error codes for operations
   * performed with PDOStatement objects.
   */
  <<__Native>>
  public function errorCode(): mixed;

  /* @return array - PDOStatement::errorInfo() returns an array of error
   * information about the last operation performed by this statement handle.
   * The array consists of the following fields: Element Information 0 SQLSTATE
   * error code (a five characters alphanumeric identifier defined in the ANSI
   * SQL standard). 1 Driver specific error code. 2 Driver specific error
   * message.
   */
  <<__Native>>
  public function errorInfo(): varray<mixed>;

  /* Sets an attribute on the statement. Currently, no generic attributes are
   * set but only driver specific: PDO::ATTR_CURSOR_NAME (Firebird and ODBC
   * specific): Set the name of cursor for UPDATE ... WHERE CURRENT OF.
   * @param int $attribute
   * @param mixed $value
   * @return mixed - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function setAttribute(int $attribute,
                        mixed $value): mixed;

  /* Gets an attribute of the statement. Currently, no generic attributes exist
   * but only driver specific: PDO::ATTR_CURSOR_NAME (Firebird and ODBC
   * specific): Get the name of cursor for UPDATE ... WHERE CURRENT OF.
   * @param int $attribute
   * @return mixed - Returns the attribute value.
   */
  <<__Native>>
  public function getAttribute(int $attribute): mixed;

  /* Use PDOStatement::columnCount() to return the number of columns in the
   * result set represented by the PDOStatement object.  If the PDOStatement
   * object was returned from PDO::query(), the column count is immediately
   * available.  If the PDOStatement object was returned from PDO::prepare(), an
   * accurate column count will not be available until you invoke
   * PDOStatement::execute().
   * @return int - Returns the number of columns in the result set represented
   * by the PDOStatement object. If there is no result set,
   * PDOStatement::columnCount() returns 0.
   */
  <<__Native>>
  public function columnCount(): int;

  /* @param int $column - The 0-indexed column in the result set.
   * @return mixed - Returns an associative array containing the following
   * values representing the metadata for a single column: Column metadata Name
   * Value native_type The PHP native type used to represent the column value.
   * driver:decl_type The SQL type used to represent the column value in the
   * database. If the column in the result set is the result of a function, this
   * value is not returned by PDOStatement::getColumnMeta(). flags Any flags set
   * for this column. name The name of this column as returned by the database.
   * table The name of this column's table as returned by the database. len The
   * length of this column. Normally -1 for types other than floating point
   * decimals. precision The numeric precision of this column. Normally 0 for
   * types other than floating point decimals. pdo_type The type of this column
   * as represented by the PDO::PARAM_* constants.  Returns FALSE if the
   * requested column does not exist in the result set, or if no result set
   * exists.
   */
  <<__Native>>
  public function getColumnMeta(int $column): mixed;

  /* @param int $mode - The fetch mode must be one of the PDO::FETCH_*
   * constants.
   * @return bool - Returns 1 on success or FALSE on failure.
   */
  <<__Native>>
  public function setFetchMode(int $mode,
                        ...$argv): bool;

  /* Some database servers support stored procedures that return more than one
   * rowset (also known as a result set). PDOStatement::nextRowset() enables you
   * to access the second and subsequent rowsets associated with a PDOStatement
   * object. Each rowset can have a different set of columns from the preceding
   * rowset.
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function nextRowset(): bool;

  /* PDOStatement::closeCursor() frees up the connection to the server so that
   * other SQL statements may be issued, but leaves the statement in a state
   * that enables it to be executed again.  This method is useful for database
   * drivers that do not support executing a PDOStatement object when a
   * previously executed PDOStatement object still has unfetched rows. If your
   * database driver suffers from this limitation, the problem may manifest
   * itself in an out-of-sequence error.  PDOStatement::closeCursor() is
   * implemented either as an optional driver specific method (allowing for
   * maximum efficiency), or as the generic PDO fallback if no driver specific
   * function is installed. The PDO generic fallback is semantically the same as
   * writing the following code in your PHP script:
   * @return bool - Returns TRUE on success or FALSE on failure.
   */
  <<__Native>>
  public function closeCursor(): bool;

  /* Dumps the information contained by a prepared statement directly on the
   * output. It will provide the SQL query in use, the number of parameters used
   * (Params), the list of parameters, with their name, type (paramtype) as an
   * integer, their key name or position, the value, and the position in the
   * query (if this is supported by the PDO driver, otherwise, it will be -1).
   * This is a debug function, which dump directly the data on the normal
   * output. TipAs with anything that outputs its result directly to the
   * browser, the output-control functions can be used to capture the output of
   * this function, and save it in a string (for example).  This will only dumps
   * the parameters in the statement at the moment of the dump. Extra parameters
   * are not stored in the statement, and not displayed.
   * @return mixed - No value is returned.
   */
  <<__Native>>
  public function debugDumpParams(): mixed;

  /* @return mixed
   */
  <<__Native>>
  public function current(): mixed;

  /* @return mixed
   */
  <<__Native>>
  public function key(): mixed;

  /* @return mixed
   */
  <<__Native>>
  public function next(): mixed;

  /* @return mixed
   */
  <<__Native>>
  public function rewind(): mixed;

  /* @return bool
   */
  <<__Native>>
  public function valid(): bool;

  /* @return mixed
   */
  <<__Native>>
  public function __wakeup()[]: mixed;

  /* @return mixed
   */
  <<__Native>>
  public function __sleep()[]: mixed;
}

/* @return vec<string>
 */
<<__Native>>
function pdo_drivers(): vec<string>;
