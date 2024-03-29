<?php

use Illuminate\Support\Facades\Route;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/products', function () {
    return view('products');
});

Route::get('/products/{id}/{productName}', function ($id, $productName) {
    return view('products')->with([
        'id' => $id,
        'productName' => $productName
    ]);
});
