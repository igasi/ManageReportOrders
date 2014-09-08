<?php


use Symfony\Component\Yaml\Parser;
use Symfony\Component\Yaml\Dumper;


class mroConfig
{

	private $_config = array();
	private $_config_update = array();

	protected $_config_path = 'private://mro/config/';
	protected $_filename = null;



	public function __construct($filename = 'default')
	{

		$this->_filename = $filename;

		$yaml = new Parser();
		$this->_config = $yaml->parse(
			file_get_contents(
					$this->_config_path . $this->_filename . '.yml'
			)
		);

	}

/**
 * @param   string 			$setting    Config type return
 * @param   string 			$list    	 List type return ( options|defaults )
 *
 * @return  mixed 								 A PHP value 
 */

	public function getConfig($setting = 'all', $list = 'options')
	{

		if ($setting == 'all') {
			return $this->_config;
		}

		if ( array_key_exists($setting,$this->_config) ) {
			return $this->_config[$setting][$list];
		}

		return NULL;

	}

/*
	$dumper = new Dumper();

	$yaml = $dumper->dump($config, 4);
	$path = 'private://mro/config/default.yml';
	
	file_put_contents($path, $yaml);

*/

}

